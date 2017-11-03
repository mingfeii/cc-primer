#include <iostream>
#include <string>
using namespace std;

istream& ex8_1(istream &is)
{
    string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();
    return is;
}
int main()
{
    istream &is = ex8_1(cin);//打印流的状态
    cout << is.rdstate() << endl;
    return 0;
}
