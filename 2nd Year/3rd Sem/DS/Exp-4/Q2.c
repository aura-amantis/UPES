/* Reverse a string using a stack implemented with Dynamic 1D array. */

#include <stdio.h>
#include <string.h>

void swapstr(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reversestr(char *str, int i, int j)
{
	if(i<j)
	{
		swapstr(&str[i],&str[j]);
		
		reversestr(str, i+1, j-1);
	}
}

int main()
{
	char str[] = "Tisha";
	reversestr(str,0, strlen(str)-1);
	printf("%s",str);
	return 0;
}
