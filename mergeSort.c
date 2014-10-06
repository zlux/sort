/*
	File Name: mergesort.c
	Purpose: Practise of merge sort. merge sort is like Divide and Conquer, 		 British combat tactic.
	Time:   06 OCT 2014
	Author: Zhu Liang
*/ 
#include "stdio.h"

int iTemp[100] = {0};

void mergeSortLast(int* pArray, int iLeft, int iMid, int iRight)
{
	int i = iLeft;
	int iLL = iLeft;
	int iRR = iMid+1;
	
	while(iLL <= iMid && iRR <= iRight)
	{
		if(pArray[iLL] < pArray[iRR])
			iTemp[i++] = pArray[iLL++];
		else
			iTemp[i++] = pArray[iRR++];
	}
	if(iLL > iMid)
	{
		while(iRR<=iRight)
			iTemp[i++] = pArray[iRR++];
	}
	else
	{
		while(iLL <= iMid)
			iTemp[i++] = pArray[iLL++];
	}

	for(i = iLeft; i<= iRight; i++)
	{
		pArray[i] = iTemp[i];
	}
}
void mergeSort(int* pArray, int iLeft, int iRight)
{
	int iMid = (iLeft + iRight)/2;
	
	if(iLeft == iMid)
	return;

	mergeSort(pArray, iLeft, iMid);
	mergeSort(pArray, iMid+1, iRight);
	
	mergeSortLast(pArray, iLeft, iMid, iRight);
}
int main(void)
{
	int Array[100] = {0};
	int iLen       = 0;
	int i  = 0;
	while(scanf("%d", &Array[iLen]))
	{
		iLen++;
	}
	
	printf("original array\n");
	for(i = 0; i< iLen; i++)
	printf("%d\t", Array[i]);
	printf("\n");

	mergeSort(Array, 0, iLen-1);

	printf("afterwards\n");
	for(i =0; i<iLen; i++)
	printf("%d\t", Array[i]);
	printf("\n");
	
	return 0;
}
