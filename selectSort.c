/*
	File Name: selectSort.c
	Purpose:   simple select Sort algo, 
		   comparing times is still o(n^2), but times of swaping is tren		   mendously reduced. 
	Time: 06 Oct 2014
	Author: Zhu Liang
*/
#include "stdio.h"

void swap(int* pArray, int i, int j)
{
	int iTemp = pArray[i];
	pArray[i] = pArray[j];
	pArray[j] = iTemp;
}

void selectSort(int* pArray, int iLen)
{
	int i = 0;
	int j = 0;
	int min  = 0;
	for(i =0; i< iLen-1; i++)
	{
		min = i;
		for(j = i+1; j<iLen; j++)
		{
			if(pArray[j]<pArray[min])
				min = j;
		}
		if(min != i)
			swap(pArray, i, min);
	}
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

	selectSort(Array, iLen);

	printf("afterwards\n");
	for(i =0; i<iLen; i++)
	printf("%d\t", Array[i]);
	printf("\n");
	
	return 0;
}
