#include <iostream>
#include <vector>

using namespace std;

//判断一个数是奇数还是偶数，奇数二进制最后一位是1
void isOdd()
{
    cout << "Enter a int :" << endl;
    int tmp;
    while (cin >> tmp)
    {
        if (tmp & 0x1)
            cout << tmp <<"是奇数" << endl;
        else
            cout <<  tmp <<"是偶数" << endl;
    }

}

void ex4_21()
{
    vector<int> ivec{1,2,3,4,5,6,7,8,9};
    for (auto i: ivec)
        cout << ((i & 0x1)?i * 2:i) << " ";
    cout << endl;

}
int main()
{
    ex4_21();
    cout << "Hello World!" << endl;
    return 0;
}
