/* Code to run First Come First Serve CPU Scheduling algorithm */

#include <stdio.h>

/* Function declarations */
void calcwt(int processid[], int n, int bt[], int wts[]);
void calctt(int processid[], int n, int bt[], int wts[], int tat[]);

int main()
{
    int n, i, processid[25], bt[25], wts[25], tat[25];
    int totalWT, totalTT;
    totalTT = totalWT = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("\nEnter process ids:\n\n");
    for (i = 0; i < n; i++) {
        printf("Enter process no. %d: ", (i + 1));
        scanf("%d", &processid[i]);
    }

    printf("\nEnter burst times:\n\n");
    for (i = 0; i < n; i++) {
        printf("Enter burst time no. %d: ", (i + 1));
        scanf("%d", &bt[i]);
    }

    //Function calls
    calcwt(processid, n, bt, wts);
    calctt(processid, n, bt, wts, tat);

    //Printing results
    printf("Waiting times are: \n");
    for (i = 0; i < n; i++) {
        totalWT += wts[i];
        printf("%d ", wts[i]);
    }

    printf("Turnaround times are: \n");
    for (i = 0; i < n; i++) {
        totalTT += tat[i];
        printf("%d ", tat[i]);
    }

    /* Display avgerage waiting and turnaround times */
    printf("Average turnaround time = %.3f", (float)totalTT / (float)n);
    printf("Average waiting time = %.3f", (float)totalWT / (float)n);

    printf("\n");
}

// Function to calculate waiting time of each process
void calcwt(int processid[], int n, int bt[], int wts[])
{
    /* The waiting time for the first process is always 0 since it is first to be executed */
    wts[0] = 0;

    for (int i = 1; i < n; i++) {
        wts[i] = wts[i - 1] + bt[i - 1];
    }
}

// Function to calculate turnaround time of each process.
 /* number of processes, array of burst times and array of waiting times as arguments */
void calctt(int processid[], int n, int bt[], int wts[], int tat[])
{
    for (int i = 0; i < n; i++) {
        tat[i] = bt[i] + wts[i];
    }
}
