#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// д������֤bool��BOOL������

typedef int BOOL;
#define TRUE  1
#define FALSE 0



int _tmain(int argc, TCHAR *argv[])
{
    //��С����
    _tprintf(_T("sizeof(bool) = %d \r\n"), sizeof(bool));
    _tprintf(_T("sizeof(BOOL) = %d \r\n"), sizeof(BOOL));

    //��ֵ����
    BOOL bRETN = 10;
    bool bRetn = (bool)10;
    _tprintf(_T("bool = 10 = %d \r\n"), bRetn);
    _tprintf(_T("BOOL = 10 = %d \r\n"), bRETN);

    _tsystem(_T("pause"));
    return 0;
}
