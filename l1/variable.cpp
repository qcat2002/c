#include<iostream>
using namespace std;

/*
定义常量的方式 »»
1. #define xx xx
2. const xx = xx;
*/

// define 在开头
#define Day 7 // #define Day(名字) 7(值)

int main()
{
    const int total_month = 12;
    cout << "一周一共有：" << Day << "天" << endl;
    cout << "一年一共有：" << total_month << "月" << endl;
    return 0;
}