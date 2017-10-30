#include <iostream>
#include <iterator>
#include <vector>
#include <cstring>
//#include "ex3_34.cpp"

using namespace std;

void ex3_31()
{
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    for (auto n : a)
    {
        cout << n << " ";
    }
    cout << endl;
}

void ex3_32()
{

    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i;
    }
    vector<int> v(10);
    for(int i = 0; i != 10; ++i) v[i] = a[i];
    vector<int> v2(v);
    for (auto i: v2) cout << i << " ";
    cout << endl;
}

void ex3_35()
{
       const int size = 10;
       int arr[size];
       for (auto ptr = arr; ptr != arr + size; ++ptr) *ptr = 0;

       for (auto i : arr) cout << i << " ";
       cout << endl;

}

void ex3_39()
{
    string s1,s2;
    cout << "请输入2个字符串以比较大小：" << endl;
    cin >> s1 >> s2;
    if (s1 == s2)
        cout << "same string" << endl;
    else if (s1 > s2)
            cout << "s1 > s2" << endl;
    else
            cout << "s1 < s2" << endl;

        cout << "=========用c风格字符串比较:" << endl;
    const char *cs1 = s1.c_str();
    const char *cs2 = s2.c_str();
    auto res = strcmp(cs1,cs2);
    if (res == 0)
        cout << "same string" << endl;
    else if(res < 0)
        cout << cs1 << " < " << cs2 << endl;
    else
        cout << cs1 << " > " << cs2 << endl;
}

void ex3_40()
{
    const char cstr1[] = "Hello";
    const char cstr2[] = "World!";
    const size_t new_size = strlen(cstr1) + strlen(" ") + strlen(cstr2) +1;
    char cstr3[new_size];
    strcpy(cstr3,cstr1);
    strcat(cstr3," ");
    strcat(cstr3,cstr2);

    cout << cstr3 << endl;

}
int main()
{
    ex3_40();
    // ex3_39();
    //ex3_35();
    //ex3_34();
    //ex3_25();
    //cout << "Hello World!" << endl;
    return 0;
}
