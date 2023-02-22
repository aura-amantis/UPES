/*  Code to Sort the List of Elements stored in an Array using the following algorithms: 
        Insertion Sort,
        Selection Sort, 
        Merge Sort, 
        Quick Sort.
*/

#include<stdlib.h>
#include<stdio.h>

int insert(int arr[], int size);
int show(int arr[], int size);
void InsertSort(int arr[], int size);
void selectionsort(int *arr, int size);
void sort(int arr[],int first,int last);
void merge(int arr[],int i1,int j1,int i2,int j2);
void quicksort(int arr[],int first,int last);
int main()
{
    int size, choice;
    printf("\nEnter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    insert(arr, size);
    menu:
    printf("\nMake a choice:");
    printf("\n1.Insertion Sort\n2.Selection sort\n3.Merge sort\n4.Quick sort\n5.Display\n6.Exit\nChoice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
        InsertSort(arr, size);
        break;
        case 2:
        selectionsort(arr, size);
        printf("\nSorting done");
        break;
        case 3:
        sort(arr,0,size-1);
        printf("\nSorting done");
        break;
        case 4:
        quicksort(arr,0,size-1);
        printf("\nSorting done");
        break;
        case 5:
        show(arr, size);
        break;
        case 6:
        exit(0);
        break;
        default:
        printf("\nInvalid input");
        break;
    }
    goto menu;
    return 0;
}
int insert(int arr[], int size)
{
    int i;
    printf("\nEnter the elements:\n");
    for(i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}
int show(int arr[], int size)
{
    int i;
    printf("\nList: ");
    for(i = 0; i < size; i++)
    {
    printf("%d ", arr[i]);
    }
    return 0;
}
void InsertSort(int arr[], int size)
{
    int temp,i,j,k;
    for(i=1;i<size;i++)
    {
        temp=arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>temp))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
        printf("\nPass %d: ",i);
        for(k=0;k<size;k++)
        {
            printf("%d ",arr[k]);
        }
    }
}
void selectionsort(int *arr, int size)
{
 printf("\nRunning selection sort...");
 int i, j, minindex, temp;
 for(i = 0; i < size-1; i++)
 {
    minindex = i;
    for(j = i+1; j < size; j++)
    {
        if(arr[j] < arr[minindex])
    {
        minindex = j;
    }
}
    temp = arr[i];
    arr[i] = arr[minindex];
    arr[minindex] = temp;
 }
}
void merge(int arr[],int i1,int j1,int i2,int j2)
{
int temp[100];
int i=i1,j=i2,k=0;
while(i<=j1 && j<=j2)
{
if(arr[i]<arr[j])
temp[k++]=arr[i++];
else
temp[k++]=arr[j++];
}
while(i<=j1)
temp[k++]=arr[i++];
while(j<=j2)
temp[k++]=arr[j++];
for(i=i1,j=0;i<=j2;i++,j++)
arr[i]=temp[j];
}
void sort(int arr[],int first,int last)
{
int mid;
if(first<last)
{
mid=(first+last)/2;
sort(arr,first,mid);
sort(arr,mid+1,last);
merge(arr,first,mid,mid+1,last);
}
}
void quicksort(int arr[],int first,int last)
{
 int i, j, pivot, temp;
 if(first<last)
 {
 pivot=first;
 i=first;
 j=last;

 while(i<j)
 {
 while(arr[i]<=arr[pivot]&&i<last)
 i++;
 while(arr[j]>arr[pivot])
 j--;
 if(i<j)
 {
 temp=arr[i];
 arr[i]=arr[j];
 arr[j]=temp;
 }
 }
 temp=arr[pivot];
 arr[pivot]=arr[j];
 arr[j]=temp;
 sort(arr,first,j-1);
 sort(arr,j+1,last);
 }
}
