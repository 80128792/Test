#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// ʹ�ò�ͬ��������ʽ��������ָ��const long��ָ�룬һ��ָ��ָ��һ��long���顣
// ��ʾ����ָ�����Ӻͼ��٣������ܸı�����ָ���ֵ

int _tmain(int argc, TCHAR *argv[])
{
    int nArrNum[3]{ 1, 2 , 3 };

    const int *pnArr1 = nArrNum;        //���ܸı�ָ��ָ���ֵ
    int *const pnArr2 = nArrNum;        //���ܸı�ָ���ָ��
    const int *const pnArr3 = nArrNum;  //���ܸı�ָ��ָ���ָ���ֵ

    //���ܸı�ָ��ָ���ֵ, ���ǿ��Ըı�ָ���ָ��
    pnArr1++;
    //*pnArr1 = 100;

    //���ܸı�ָ���ָ��, ���ǿ��Ըı�ָ��ָ���ֵ
    //pnArr2++;
    *pnArr2 = 100;

    //���ܸı�ָ���ָ��, Ҳ���ܸı�ָ���ֵ
    //pnArr3++;
    //*pnArr3 = 300;

    _tsystem(_T("pause"));
    return 0;
}
