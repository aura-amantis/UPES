/* Code to get the number of vertices of a graph and adjacency matrix. Check if 
the graph is a digraph or an undirected graph. */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int v, temp, count = 0;
    printf("Enter the number of vertices in the graph: "); 
    scanf("%d", &v); 
    int adj_mat[v][v];
    for(int i = 0; i < v; ++i)
    {
        for(int j = 0; j < v; ++j)
        {
            L1: 
                printf("\nEnter '1' if the %d is connected to %d, and if are not connected than press '0': ", i+1, j+1); 
                scanf("%d", &temp); 
            if(temp > 1 || temp < 0)
            {
                printf("\nWrong Input...");
                goto L1;     
            }
            else
            {
                adj_mat[i][j] = temp;   
                printf("\nInput recorded…Insert Next Element\n"); 
            }
        }
    }
    for(int i = 0; i < v; ++i)
    {
        for(int j = 0; j < v; ++j)
        {
            if(adj_mat[i][j] != adj_mat[j][i])
            {
                count = 1; 
                break; 
            }
        }
        if(count == 1)
        {
            break; 
        }
    }
    if(count == 1)
        printf("\nThis adjacency matrix is for diagraph.");
    else if(count == 0)
        printf("\nThis adjacency matrix is for the undirected graph.");
    return 0; 
}
