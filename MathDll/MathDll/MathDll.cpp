// MathDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
  
#include "stdio.h"
#include "MathDll.h" 

#include "windows.h"

int Add(PARAMETER &para)
{
	printf("Name = %s\n", para.PROFILE.szName);
	printf("Age  = %s\n", para.PROFILE.szAge);
	printf("type  = %d\n", para.type);

	char szDbgStr[256];	

	sprintf_s(szDbgStr, 256, "(MathDll) %s\n", para.PROFILE.szName);
	OutputDebugStringA(szDbgStr);

	sprintf_s(szDbgStr, 256, "(MathDll) %s\n", para.PROFILE.szAge);
	OutputDebugStringA(szDbgStr);

	sprintf_s(szDbgStr, 256, "(MathDll) type  = %d\n", para.type);
	OutputDebugStringA(szDbgStr);

	return para.SUB_PARA1.nPara1 + para.SUB_PARA1.nPara2 + 
		   para.SUB_PARA2.nPara3 + para.SUB_PARA2.nPara4 + 
		   para.SUB_PARA3.nPara5 + para.SUB_PARA3.nPara6;
}

int Sub(int *pPara1, int *pPara2) {

	return *pPara1 - *pPara2;
}
