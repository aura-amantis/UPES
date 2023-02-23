/* Code to store ‘n’ numbers in an array in an unsorted order. Using menu-driven 
logic perform a search (Linear and Binary Search algorithms) for a given number 
and report success or failure in the form of a suitable message. 
(Hint: Before performing a Binary search the array should be sorted using the 
Bubble sort algorithm.) */


// Linear and Binary search

#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[], int n);
void display(int arr[],int n);
void bubble_sort(int arr[], int n);
void binary_search(int arr[], int n);

int main(){
	int n, i=0, choice;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of array: ");
	while(i<n){
		scanf("%d",&arr[i]);
		i++;
	}
	L1 : printf("1:Display , 2:Linear Search , 3:Binary Search , Any:Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			display(arr,n);
			break;
		case 2:
			linear_search(arr,n);
			break;
		case 3:
			bubble_sort(arr,n);
			binary_search(arr,n);
			break;
		default:
			printf("Program Closed...\n");
			exit(EXIT_SUCCESS);	
	}
	goto L1;
	return 0;
}

void display(int arr[],int n){
	printf("The array is: ");
	for(int i=0;i<n;i++)
		printf("|%d| ",arr[i]);
}

int linear_search(int arr[],int n){
	int count=0,ele;
	printf("Enter the element to search: ");
	scanf("%d",&ele);
	for(int i=0;i<n;i++){
		if(arr[i] == ele){
			printf("%d found at position %d\n",ele,i+1);
			count++;
		}
	}
	if(count==0) printf("\nElement not found...");
	else	printf("%d ocured %d times in the array",ele,count);
	return 0;
}

void bubble_sort(int arr[],int n){
	int temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

void binary_search(int arr[],int n){
	int ele, left=0,right=n-1;
	int mid = (left+right)/2;
	printf("Enter the element to search: ");
	scanf("%d",&ele);
	while(left<=right){
		if(arr[mid]<ele){
			left = mid +1;
			mid = (left+right)/2;
		}
		else if(arr[mid]==ele){
			printf("Element found at position : %d\n",mid+1);
			break;
		}
		else{
			right=mid-1;
			mid=(left+right)/2;
		}
	}
	if(left>right) printf("Element not found...\n");
}
