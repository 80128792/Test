#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 在一个文件中创建一个extern const声明，该文件的main()函数答应extern const的值，
// 在另外一个文件中定义extern const,然后编译和连接这两个文件
// 没有任何问题

const int g_nNum = 100;

int _tmain(int argc, TCHAR *argv[])
{

    _tsystem(_T("pause"));
    return 0;
}
