#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 写一个指向double类型的const指针，让它指向double数组。
// 显示能改变指针指向的内容，但不能增加或减小指针

int _tmain(int argc, TCHAR *argv[])
{
    double dArrNum[3]{ 1.0, 2.0, 3.0 };

    const double *pdArr1 = dArrNum;         //不能改变指向的值
    double *const pdArr2 = dArrNum;         //不能改变指针指向
    const double *const pdArr3 = dArrNum;   //不能改变指针指向, 指向的值

    //可以改变指向, 不能改变指向的值
    pdArr1++;
    //*pdArr1 = 100.0;

    //可以改变指向的值, 不能改变指向
    //pdArr2++;
    *pdArr2 = 200.0;

    //不能改变指向的值, 不能改变指向
    //pdArr3++;
    //*pdArr3 = 300.0;

    _tsystem(_T("pause"));
    return 0;
}
