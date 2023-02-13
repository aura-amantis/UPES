/* Code for First Fit */

#include<stdio.h>
void main()
{
    int process_no;
    int block_no;
    int p_size[100], b_size[100];
    int flags[10], allocation[10], i, j;
    for(i = 0; i < 10; i++)
	{
		flags[i] = 0;
		allocation[i] = -1;
	}
    printf("Enter the no. of blocks: ");
    scanf("%d",&block_no);
    printf("\nEnter the size of block:");
    for(i = 0; i < block_no; i++)
        scanf("%d",&b_size[i]);
    printf("\nEnter no. of processes: ");
	scanf("%d", &process_no);
	printf("\nEnter size of each process: ");
	for(i = 0; i < process_no; i++)
		scanf("%d", &p_size[i]);
	for(i = 0; i < process_no; i++)         //allocation as per first fit
		for(j = 0; j < block_no; j++)
			if(flags[j] == 0 && b_size[j] >= p_size[i])
			{
				allocation[j] = i;
				flags[j] = 1;
				break;
			}
	//display allocation details
	printf("\nBlock no.\tsize\t\tprocess no.\t\tsize");
	for(i = 0; i < block_no; i++)
	{
		printf("\n%d\t\t%d\t\t", i+1, b_size[i]);
		if(flags[i] == 1)
			printf("%d\t\t\t%d",allocation[i]+1,p_size[allocation[i]]);
		else
			printf("Not allocated");
	}
}
