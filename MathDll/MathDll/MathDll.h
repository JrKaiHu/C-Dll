#pragma once

//typedef struct tagPARAMETER {
//	int nPara1;
//	int nPara2;
//}PARAMETER;

typedef enum {
	TYPE_1,
	TYPE_2,
	TYPE_3
}TYPE;

typedef struct tagPARAMETER {

	TYPE type;

	struct {
		int nPara1;
		int nPara2;
	}SUB_PARA1;

	struct {
		int nPara3;
		int nPara4;
	}SUB_PARA2;

	struct {
		int nPara5;
		int nPara6;
	}SUB_PARA3;

	struct {
		char szName[20];
		char szAge[20];
	}PROFILE;

}PARAMETER;

extern "C" __declspec(dllexport) int Add(PARAMETER &para);
extern "C" __declspec(dllexport) int Sub(int *pPara1, int *pPara2);