#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// ��һ���ļ��д���һ��extern const���������ļ���main()������Ӧextern const��ֵ��
// ������һ���ļ��ж���extern const,Ȼ�����������������ļ�
// û���κ�����

const int g_nNum = 100;

int _tmain(int argc, TCHAR *argv[])
{

    _tsystem(_T("pause"));
    return 0;
}
