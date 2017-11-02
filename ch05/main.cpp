#include <iostream>

using namespace std;

void ex5_3()
{
    int sum = 0,val = 1;
    while (val <= 10)
        sum += val,++val;
    cout << "1到十的和为：" << sum << endl;

}
int main()
{
    ex5_3();
    cout << "Hello World!" << endl;
    return 0;
}
