#include <iostream>
#include <iterator>
#include <vector>
#include <cstring>


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
    else cout << "s1 < s2" << endl;
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

void ex3_41()
{
    //用数组初始化vector对象
    int arr[] = {1,2,3,4,5,6,7,8,9};
    vector<int> v(begin(arr),end(arr));
    for (auto i: v)
        cout << i << " ";
    cout << endl;
}
void ex3_42()
{
    //vector对象初始化一个数组
    vector<int> v = {1,2,3,4,5,6,7,8,9};
    int arr[v.size()];
    for (decltype(v.size()) i = 0; i < v.size(); ++i)
       arr[i] = v[i];
    for (auto i: arr)
        cout << i << " ";
    cout << endl;


}
//二维数组 普通版本
void arr2arr0()
{
    int arr[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    for (auto p = arr; p != arr + 3; ++p)
    {    for (auto q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }
}
//二维数组 范围for语句版本
void arr2arr1()
{
    int arr[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    for (const auto &row: arr) //最外层必须用引用，防止自动转化为指针
    {
        for (auto col : row)
            cout << col << ' ';
        cout << endl;
    }

}
//二维数组 迭代器版本
void arr2arr2()
{
    int arr[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    for (auto p = begin(arr); p != end(arr); ++p)
    {
        for (auto q = begin(*p); q != end(*p); ++q)
            cout << *q << ' ';
        cout << endl;
    }
}

//二维数组 类型别名版本
void arr2arr3()
{
    int arr[3][4] = {{1,1,1,1},{2,2,2,2},{3,3,3,3}};
    using int_array = int[4]; //typedef int int_array[4] typedef bool(*FuncP)(const string &) ->函数指针类型
    for (int_array *p = arr; p != arr + 3; ++p)
    {    for (int *q = *p; q != *p + 4; ++q)
            cout << *q << ' ';
        cout << endl;
    }
}

int main()
{
    //arr2arr3();
     ex3_39();
    //ex3_35();
    //ex3_34();
    //ex3_25();
    //cout << "Hello World!" << endl;
   //ex3_43();

   return 0;
}
