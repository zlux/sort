/*
	Author: Zhu Liang
	Time  : 07 OTC, 2014
	Description: Shell Sort, it is an imporved version of Insert Sort
	Data Structure Textbook or Internet resources are too difficult to understand, it is better that I understand the princinple and write my own code. Like this piece of code. Just grind the iIncrease. And during each round, insert sort is used to make everything smooth.
*/

#include "stdio.h"

void swap(int* pArray, int i, int j)
{
	int iTemp = pArray[i];
	pArray[i] = pArray[j];
	pArray[j] = iTemp;
}
void shellSort(int* pArray, int iLength)
{
	int i = 0;
	int j = 0;
	int iTemp = 0;
	int iIncrease = iLength;
	do
	{
		iIncrease = iIncrease/3 +1;

		for(i = iIncrease; i< iLength; i++)
		{
			if(pArray[i] < pArray[i-iIncrease])
			{
				//need to find a proper place
				iTemp = pArray[i];
				j = i-iIncrease;
				while(pArray[j] > iTemp && j>=0)
				{
					pArray[j+iIncrease] = pArray[j];
					j = j - iIncrease;
				}
				pArray[j+ iIncrease] = iTemp;
			}
		}
	}while(iIncrease > 1);	
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

	shellSort(buf, iLength);

	for(i = 0; i< iLength; i++)
		printf("%d\t", buf[i]);
	puts("\n");
	getchar();	
}
