#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;
/*
istream& ex8_1(istream &is)
{
    string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();
    return is;
}
*/
struct PersonInfo
{
    string name;
    vector<string> phones;
};


void stest()
{   string line,word;
    vector<PersonInfo> people;

    while (getline(cin,line))
    {
        PersonInfo info;
        istringstream record(line);
        record >> info.name;
        while (record >> word)
            info.phones.push_back(word);
        people.push_back(info);
    }

    for (auto p: people)
    {   cout << "姓名：" << endl;
        cout << p.name << ":" << endl;
        for (auto n:p.phones)
            cout << n << " ";
        cout << endl;
    }
}

//将文件的行保存在vector<string> 在用istringstring 从vector读取数据元素
int ex8_10()
{
    ifstream ifs("/home/s/cpp/cc-primer/ch08/test.txt");
    //对于流要检测流是否成功
    if (!ifs)
    {
        cerr << "No data!" << endl;
        return -1;
    }
    vector<string> vecline;
    string line;
    while (getline(ifs,line)) //每一行存入vector
        vecline.push_back(line);
    for (auto &s:vecline)
    {
        istringstream iss(s); //
        string word;
        while (iss >> word) { //从每一行读取单词
            cout << word << endl;
        }
    }
    return 0;
}
void ex8_11()
{
    string line,word;
    vector<PersonInfo> people;
     istringstream record(line);
        while (getline(cin,line))
        {
            PersonInfo info;
            record.clear();
            record.str(line);
            record >> info.name;
            while (record >> word)
                info.phones.push_back(word);
            people.push_back(info);
        }
        for (auto p: people)
        {   cout << "姓名：" << endl;
            cout << p.name << ":" << endl;
            for (auto n:p.phones)
                cout << n << " ";
            cout << endl;
        }
}
bool valid(const string& str)
{
    return isdigit(str[0]);
}

string format(const string& str)
{
    return str.substr(0,3) + "-" + str.substr(3,3) + "-" + str.substr(6);
}

int  ex8_13()
{
    ifstream ifs("/home/s/phones.txt");
        if (!ifs)
        {
            cerr << "no phone numbers?" << endl;
            return -1;
        }

        string line, word;
        vector<PersonInfo> people;
        istringstream record;
        while (getline(ifs, line))
        {
            PersonInfo info;
            record.clear();
            record.str(line);
            record >> info.name;
            while (record >> word)
                info.phones.push_back(word);
            people.push_back(info);
        }

        for (const auto &entry : people)
        {
            ostringstream formatted, badNums;
            for (const auto &nums : entry.phones)
                if (!valid(nums)) badNums << " " << nums;
                else formatted << " " << format(nums);
            if (badNums.str().empty())
                cout << entry.name << " " << formatted.str() << endl;
            else
                cerr << "input error: " << entry.name
                     << " invalid number(s) " << badNums.str() << endl;
        }
}
int main()
{
    //ex8_11();

   // istream &is = ex8_1(cin);//打印流的状态
    //cout << is.rdstate() << endl;
   //   std::istringstream iss("Hello");
  //    func(iss);
    //stest();
    ex8_13();
    return 0;
}
