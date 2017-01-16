#include <iostream>
#include <fstream>
#include <string.h>
#include "Merge.h"
#include "Arrays.h"

using namespace std;
void pint(int *arrays, int size);
int main(int argc, char* argv[])
{
	char filename[128];
	if(argc==1)
	{
		memcpy(filename,"file",4);	
	}
	else
	{
		memcpy(filename,argv[1],strlen(argv[1]));
	}
	ifstream in(filename);
	int fint = 0;
	int arrays[1024];
	int i=0;
	while(in >> fint)
	{
		arrays[i]=fint;
		i++;
	}
	int size=i;
	Merge mg;
	mg.mergeSort(arrays,size);
	pint(arrays,size);
	return 0;
}
void pint(int *arrays, int size)
{
	int i=0;
	char tail=',';
	while(i<size)
	{
		if(i==size-1) tail='\n';
		cout <<arrays[i]<<tail;	
		i++;
	}
}
