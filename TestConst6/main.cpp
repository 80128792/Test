#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// дһ��ָ��double���͵�constָ�룬����ָ��double���顣
// ��ʾ�ܸı�ָ��ָ������ݣ����������ӻ��Сָ��

int _tmain(int argc, TCHAR *argv[])
{
    double dArrNum[3]{ 1.0, 2.0, 3.0 };

    const double *pdArr1 = dArrNum;         //���ܸı�ָ���ֵ
    double *const pdArr2 = dArrNum;         //���ܸı�ָ��ָ��
    const double *const pdArr3 = dArrNum;   //���ܸı�ָ��ָ��, ָ���ֵ

    //���Ըı�ָ��, ���ܸı�ָ���ֵ
    pdArr1++;
    //*pdArr1 = 100.0;

    //���Ըı�ָ���ֵ, ���ܸı�ָ��
    //pdArr2++;
    *pdArr2 = 200.0;

    //���ܸı�ָ���ֵ, ���ܸı�ָ��
    //pdArr3++;
    //*pdArr3 = 300.0;

    _tsystem(_T("pause"));
    return 0;
}
