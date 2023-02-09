/* Code to run Round Robin algorithm */

#include <stdio.h>

int main()
{
	int i,no_p,count=0,sum=0,y,tq,tat,at[20],bt[20],t[20],wt;
	float avg_wt,avg_tat;
	printf("Enter the number of processes:");
	scanf("%d",&no_p);
	y=no_p;
	printf("Enter the arrival time and burst time....\n");
	for (i=0;i<no_p;i++)
	{
		printf("Enter the arrival time: ");
		scanf("%d",&at[i]);
		
		printf("Enter the burst time: ");
		scanf("%d",&bt[i]);
		t[i] = bt[i];
	}
	
	printf("Enter the time quantum: ");
	scanf("%d",&tq);
	printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
	
	for(sum=0,i=0;y!=0;)
	{
		if(t[i]<=tq && t[i]>0)
		{
			sum+=t[i];
			t[i]=0;
			count=1;
		}
		else if (t[i]>0)
		{
			t[i]-=tq;
			sum+=tq;
		}
		if (t[i]==0 && count==1)
		{
			y--;
			printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, bt[i], sum - at[i], sum - at[i] - bt[i]);
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count=0;
		}
		if(i==no_p-1)
		{
			i=0;
		}
		else if(at[i+1]<=sum)
		{
			i++;
		}
		else
		{
			i=0;
		}
		avg_wt=(float)wt/no_p;
		avg_tat=(float)tat/no_p;
	}
	printf("\nAverage waiting time is: %f",avg_wt);
	printf("\nAverage turn around time is: %f",avg_tat);
	return 0;
}
