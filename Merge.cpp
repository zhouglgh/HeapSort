#include "Merge.h"
#include <iostream>
using namespace std;
void exchange(int &a, int &b);
void Merge::mergeSort(int *array,int size)
{
	int i=0,top,left,right;
	int j=0;
	while(j<size-1)
	{
		right=size-1;
		i=(right-j-2)/2;
		top=i+j;
		left=2*i+1+j;
		while(i>=0)
		{
			if(array[top]>array[left])
			{
				exchange(array[top],array[left]);	
			}
			if(array[left]>array[right])
			{
				exchange(array[left],array[right]);
			}
			i--;
			top = i+j;
			left=2*i+1+j;
			right=2*i+2+j;
		}
		j++;
	}
}
void exchange(int &a, int &b)
{
	int m=a;
	a=b;b=m;
}
