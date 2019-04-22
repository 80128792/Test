#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 创建一个const字符数组和一个指向该数组开始点的指针，使用这个指针修改数组中
// 的元素，看看编译器是否会报错，应当出错吗？如果没有，为什么会认为出错
// 

int _tmain(int argc, TCHAR *argv[])
{
    const char cstrArr[]{"hello world"};
    char *pcstr = (char*)cstrArr;

    printf("cstrArr:%s \r\n", cstrArr);

    //不会报错, 因为指针指向这个数组的首地址的时候, 必须强转才能指向
    //此时常属性已经因为强转去掉, 所以可以修改
    *pcstr = 'w';
    printf("pcstr:%s \r\n", pcstr);
    _tsystem(_T("pause"));
    return 0;
}
