#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 写代码验证bool和BOOL的区别

typedef int BOOL;
#define TRUE  1
#define FALSE 0



int _tmain(int argc, TCHAR *argv[])
{
    //大小区别
    _tprintf(_T("sizeof(bool) = %d \r\n"), sizeof(bool));
    _tprintf(_T("sizeof(BOOL) = %d \r\n"), sizeof(BOOL));

    //赋值区别
    BOOL bRETN = 10;
    bool bRetn = (bool)10;
    _tprintf(_T("bool = 10 = %d \r\n"), bRetn);
    _tprintf(_T("BOOL = 10 = %d \r\n"), bRETN);

    _tsystem(_T("pause"));
    return 0;
}
