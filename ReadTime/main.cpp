#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <ctime>

// 作业要求
// 创建一个const，当程序运行时，通过读时间决定它的值（使用<ctime>）,
// 然后再这个程序中读时间的第二个值，并赋给const，看看会有什么结果

int _tmain(int argc, TCHAR *argv[])
{
    const time_t cuTime = time(NULL);

    //因为cuTime是常量, 再次赋值会报错
    //cuTime = time(NULL);

    _tsystem(_T("pause"));
    return 0;
}
