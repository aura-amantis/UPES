//C Program to convert uppercase string to lowercase using for loop

#include <stdio.h>

int main()
{
    char s[1000];  
    int i;
    
    puts("Enter the string in Uppercase: ");
    fgets(s , 1000 , stdin);
    
    for(i=0 ; s[i] ; i++)  
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
          s[i] += 32;
}
 	
    printf("\nString in Lowercase: %s" , s);
    
    return 0;
}
