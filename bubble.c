/*
	Author: Zhu Liang
	Time  : 30 Sep, 2014
	Description: Bubble Sort Improved Version
*/

#include "stdio.h"

void swap(int* pArray, int i, int j)
{
	int iTemp = pArray[i];
	pArray[i] = pArray[j];
	pArray[j] = iTemp;
}
void bubbleSort(int* pArray, int iLength)
{
	int i = 0;
	int j = iLength -1;
	
	for(i = 0; i<iLength; i++)
	{
		j = iLength -1;
		while(j > i)
		{
			if(pArray[j] < pArray[i])
			swap(pArray, i, j);
			j--;
		}
	}
}
int main(void)
{
	int buf[100] = {0};
	int iLength = 0;
	int i = 0;

	while(scanf("%d", buf+iLength))
	{
		iLength ++;
	}
	
	for(i = 0; i<iLength; i++)
		printf("%d\t", buf[i]);
	printf("\n");

	bubbleSort(buf, iLength);

	for(i = 0; i< iLength; i++)
		printf("%d\t", buf[i]);
	puts("\n");
	getchar();	
}
