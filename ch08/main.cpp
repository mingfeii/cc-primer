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
    ex8_1(cin);
    return 0;
}
