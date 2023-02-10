//code to run Priority Scheduling Algorithm (Preemptive)

#include <stdio.h>
struct process
{
	int p_id,wait_time,arrival_time,burst_time,turn_aroundtime,pro_priority;
};
struct process array[10];

void swapping(int *a,int *b)
{
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

int main()
{
	int i,n,check_at=0;
	int compltion_time=0;
	float total_wt=0,total_tat=0,avg_wt,avg_tat;
	printf("Enter the number of process: ");
	scanf("%d",&n);
	printf("Enter the Arrival time, Enter the Burst Time, Enter the Priority of the Process...\n");
	printf("AT BT PP\n");
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&array[i].arrival_time,&array[i].burst_time,&array[i].pro_priority);
		array[i].p_id = i+1;
		
		if(i==0)
			check_at = array[i].arrival_time;
		if(check_at != array[i].arrival_time)
			check_at = 1;
	}
	
	if(check_at != 0)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(array[j].arrival_time > array[j+1].arrival_time)
				{
					swapping(&array[j].p_id,&array[j+1].p_id);
					swapping(&array[j].arrival_time,&array[j+1].arrival_time);
					swapping(&array[j].burst_time,&array[j+1].burst_time);
					swapping(&array[j].pro_priority,&array[j+1].pro_priority);
				}
			}
		}
	}
	
	if(check_at != 0)
	{
		array[0].wait_time = array[0].arrival_time;
		array[0].turn_aroundtime = array[0].burst_time - array[0].arrival_time;
		
		compltion_time = array[0].turn_aroundtime;
		total_wt+=array[0].wait_time;
		total_tat+=array[0].turn_aroundtime;
		for(int i=1;i<n;i++)
		{
			int min = array[i].pro_priority;
			for(int j=i+1;j<n;j++)
			{
				if(min > array[j].pro_priority && array[j].arrival_time<= compltion_time)
				{
					min = array[j].pro_priority;
					swapping(&array[i].p_id,&array[j].p_id);
					swapping(&array[i].arrival_time,&array[j].arrival_time);
					swapping(&array[i].burst_time,&array[j].burst_time);
					swapping(&array[i].pro_priority,&array[j].pro_priority);
				}
			}
			
			array[i].wait_time = compltion_time - array[i].arrival_time;
			total_wt += array[i].wait_time;
			
			compltion_time += array[i].burst_time;
			
			array[i].turn_aroundtime = compltion_time - array[i].arrival_time;
			total_tat += array[i].turn_aroundtime;
		}
	}
	
	else
	{
		for(int i=0;i<n;i++)
		{
			int min = array[i].pro_priority;
			for(int j=i+1;j<n;j++)
			{
				if(min > array[j].pro_priority && array[j].arrival_time <= compltion_time)
				{
					min = array[j].pro_priority;
					swapping(&array[i].p_id, &array[j].p_id);
					swapping(&array[i].arrival_time, &array[j].arrival_time);
					swapping(&array[i].burst_time, &array[j].burst_time);
					swapping(&array[i].pro_priority, &array[j].pro_priority);
				}
			}
			array[i].wait_time = compltion_time - array[i].arrival_time;
			compltion_time += array[i].burst_time;
			
			array[i].turn_aroundtime = compltion_time - array[i].arrival_time;
			total_wt = total_wt + array[i].wait_time;
			total_tat = total_tat + array[i].turn_aroundtime; 
		}
	}
	avg_wt = total_wt/n;
	avg_tat = total_tat/n;
	
	printf("The processes are\n");
	printf("ID\tWT\tTAT\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\t%d\t%d\n",array[i].p_id,array[i].wait_time,array[i].turn_aroundtime);
	}
	printf("Average waiting time is: %f\n",avg_wt);
	printf("Average turn around time is: %f",avg_tat);
	return 0;
}
