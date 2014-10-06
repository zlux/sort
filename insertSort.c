/*
	File Name: insertSort.c
	Purpose:   insert Sort algo, 
		   Took me a lot time to understand
	Time: 06 Oct 2014
	Author: Zhu Liang
*/
#include "stdio.h"

#ifdef SWAP
void swap(int* pArray, int i, int j)
{
	int iTemp = pArray[i];
	pArray[i] = pArray[j];
	pArray[j] = iTemp;
}
#endif

void insertSort(int* pArray, int iLen)
{
	int i = 0;
	int j = 0;
	int iTemp  = 0;
	for(i =1; i< iLen; i++)
	{
		iTemp = pArray[i];
		j = i-1;
		while(pArray[j]>iTemp && j >=0)
		{
			pArray[j+1] = pArray[j];
			j--;
		}
		pArray[j+1] = iTemp;
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

	insertSort(Array, iLen);

	printf("afterwards\n");
	for(i =0; i<iLen; i++)
	printf("%d\t", Array[i]);
	printf("\n");
	
	return 0;
}
