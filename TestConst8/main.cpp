#include <stdio.h>
#include <stdlib.h>
#include <tchar.h>

// 作业要求
// 创建一个函数，它带有一个const值传递的参数，然后在函数体中试图改变该参数。


//************************************
// Method:    Print
// FullName:  Print
// Function:  测试能否在函数中修改const参数
// Remark:    
// Time:      2019-04-22 15:41:23
// Access:    public 
// Returns:   void
// Qualifier:
// Parameter: const char * pstr     //要测试修改的参数
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
    //错误	C3892	“pstr” : 不能给常量赋值	TestConst8	
    //*pstr = 'a';
}