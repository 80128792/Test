#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 使用不同的声明形式创建两个指向const long的指针，一个指针指向一个long数组。
// 演示能让指针增加和减少，但不能改变它所指向的值

int _tmain(int argc, TCHAR *argv[])
{
    int nArrNum[3]{ 1, 2 , 3 };

    const int *pnArr1 = nArrNum;        //不能改变指针指向的值
    int *const pnArr2 = nArrNum;        //不能改变指针的指向
    const int *const pnArr3 = nArrNum;  //不能改变指针指向和指向的值

    //不能改变指针指向的值, 但是可以改变指针的指向
    pnArr1++;
    //*pnArr1 = 100;

    //不能改变指针的指向, 但是可以改变指针指向的值
    //pnArr2++;
    *pnArr2 = 100;

    //不能改变指针的指向, 也不能改变指向的值
    //pnArr3++;
    //*pnArr3 = 300;

    _tsystem(_T("pause"));
    return 0;
}
