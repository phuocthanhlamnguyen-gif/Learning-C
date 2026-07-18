#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	//create char pointer
	char *ptr;

	//ptr is now the memory address of the beginning of this 10 char element array.
	//we used the sizeof() function to make sure that the size of memory allocated is 10 units on any host
	ptr = malloc(10 * sizeof(char));

	//if malloc fails, our ptr pointer will be pointing towards a NULL value, this checks for that
	if (ptr == NULL)
	{
		printf("Memory could not be allocated.");
		return 1;
	}
		printf("Memory was successfully allocated.");
		//this makes sure we don't keep memory allocated that we're not using.
		free(ptr);
		//Added this to clear the pointer variable
		ptr = NULL;
		return 0;
}
