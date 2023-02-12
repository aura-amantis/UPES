/* code for Bit Map */

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int bmp[10], i, n, count;
	int  *first_limit, *last_limit;
	printf("Initialize the array of size 10 with 0 or 1.\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&bmp[i]);
	}
	printf("Enter number of required block: ");
	scanf("%d",&n);
	count=0;
	for(i=0;i<10;i++)
	{
		if(bmp[i]==0 && count<n)
		{
			printf("Block allocated at %d position\n",i+1);
			count++;
		}
	}
	if(count==n)
	{
		
		printf("Congrats! all blocks are allocated :)\n");
	}
	else
	{
		printf("Sorry!, Only %d blocks allocated to you ):\n",count);
	}
	
	return 0;
}
