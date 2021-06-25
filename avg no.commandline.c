#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	float average=0;
     int i;
	if(argc<=1)
	{
	printf("\n Enter appropriate number of arguments to calculate average. \n \n");
	exit(0);
	}
	else
	{
		for(i=1;i<argc;i++)
		{
			average+=atoi(argv[i]);
		}
	}
    average/=argc-1;
	printf("\n Average of all command line arguments is %.2f \n \n",average);
	return 0;
}
