#include <iostream>
#include <sstream>

using namespace std;

istream & func(istream &is)
{
    std::string buf;
    while (is >> buf)
        cout << buf << endl;
    is.clear();
    return is;
}
