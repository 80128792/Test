#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// ��ҵҪ��
// ����һ��������������һ��constֵ���ݵĲ�����Ȼ���ں���������ͼ�ı�ò�����


//************************************
// Method:    Print
// FullName:  Print
// Function:  �����ܷ��ں������޸�const����
// Remark:    
// Time:      2019-04-22 15:41:23
// Access:    public 
// Returns:   void
// Qualifier:
// Parameter: const char * pstr     //Ҫ�����޸ĵĲ���
//************************************
void Print(const char *pstr);



int _tmain(int argc, TCHAR *argv[])
{

    _tsystem(_T("pause"));
    return 0;
}



void Print(const char *pstr)
{
    printf(pstr);
    //����	C3892	��pstr�� : ���ܸ�������ֵ	TestConst8	
    //*pstr = 'a';
}