// MathDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
  
#include "stdio.h"
#include "MathDll.h" 

#include "windows.h"

int Add(PARAMETER &para)
{
	printf("Name = \n", para.PROFILE.szName);
	printf("Age  = \n", para.PROFILE.szAge);

	OutputDebugStringA(para.PROFILE.szName);
	OutputDebugStringA("\n");
	OutputDebugStringA(para.PROFILE.szAge);
	OutputDebugStringA("\n");

	return para.SUB_PARA1.nPara1 + para.SUB_PARA1.nPara2 + 
		   para.SUB_PARA2.nPara3 + para.SUB_PARA2.nPara4 + 
		   para.SUB_PARA3.nPara5 + para.SUB_PARA3.nPara6;
}