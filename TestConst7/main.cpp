#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// ����һ��const�ַ������һ��ָ������鿪ʼ���ָ�룬ʹ�����ָ���޸�������
// ��Ԫ�أ������������Ƿ�ᱨ��Ӧ�����������û�У�Ϊʲô����Ϊ����
// 

int _tmain(int argc, TCHAR *argv[])
{
    const char cstrArr[]{"hello world"};
    char *pcstr = (char*)cstrArr;

    printf("cstrArr:%s \r\n", cstrArr);

    //���ᱨ��, ��Ϊָ��ָ�����������׵�ַ��ʱ��, ����ǿת����ָ��
    //��ʱ�������Ѿ���Ϊǿתȥ��, ���Կ����޸�
    *pcstr = 'w';
    printf("pcstr:%s \r\n", pcstr);
    _tsystem(_T("pause"));
    return 0;
}
