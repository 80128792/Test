#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>
#include <ctime>

// ��ҵҪ��
// ����һ��const������������ʱ��ͨ����ʱ���������ֵ��ʹ��<ctime>��,
// Ȼ������������ж�ʱ��ĵڶ���ֵ��������const����������ʲô���

int _tmain(int argc, TCHAR *argv[])
{
    const time_t cuTime = time(NULL);

    //��ΪcuTime�ǳ���, �ٴθ�ֵ�ᱨ��
    //cuTime = time(NULL);

    _tsystem(_T("pause"));
    return 0;
}
