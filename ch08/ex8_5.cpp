#include <fstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

void ReadFileToVec(const string &filename,vector<string> &vec)
{
    ifstream ifs(filename);
    if (ifs)
    {
        string buf;
        while (ifs >> buf)
            vec.push_back(buf);
    }
}

int main()
{
    vector<string> vec;
    ReadFileToVec("./test.txt", vec);
    for (const auto &str : vec)
        cout << str << endl;
    return 0;
}