#include <iostream>
#include <vector>
#include <iterator>


using namespace std;

bool ex9_4(vector<int>::const_iterator first,vector<int>::const_iterator last,int value)
{
    for (; first != last; ++first)
        if (*first == value) return true;
    return false;
}
int main()
{

    vector<int> v = {2,3,45,6,7,1,8,14,56};

    auto b = ex9_4(v.cbegin(),v.cend(),123);
    cout << b << endl;
    return 0;
}
