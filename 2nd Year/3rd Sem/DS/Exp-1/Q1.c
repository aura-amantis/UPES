//C Program to find sum of array elements using recursion

#include <stdio.h>

 int sum(int a[] , int m , int i)
 {
    if(i<m)
        return a[i] + sum(a,m,++i);
    return 0;
 }
 
int main()
{
    int a[1000] , i , m , add;
    printf("Enter size of the array : ");
    scanf("%d", &m);
    printf("Enter elements in the array : ");
    
    for(i=0; i<m; i++)
    {
        scanf("%d", &a[i]);
    }
    
    add = sum(a,m,0);
    printf("Sum of array is :%d",add);
}
