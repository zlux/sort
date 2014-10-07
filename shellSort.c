/*
	Author: Zhu Liang
	Time  : 30 Sep, 2014
	Description: Shell Sort Improved Version, :)
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
	int k = 0;
	
	for (i = iLength/2; i>0; i = i/2)
	{
		for(j = i; j < iLength; j++)
		{
			for(k = j-i; k>=0; k = k-i)
			{
				if(pArray[k+i] >=pArray[k])
					break;
				else
				{
					swap(pArray, k, k+i);
				}
			}
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

	shellSort(buf, iLength);

	for(i = 0; i< iLength; i++)
		printf("%d\t", buf[i]);
	puts("\n");
	getchar();	
}
