#include <stdio.h>

//define structure
typedef struct struct_name
{
	int integer;
	char character;
	float floatie;
//give an instance of the structure the name 'example'
} example;

int main (void)
{
	example ex = {50, 'W', 3.14};
	example *ptr = &ex; //Points to ex
	//Printing stuff
	printf("This is the int: %d", (*ptr).integer);
	printf(", this is the char: %c", (*ptr).character);
	printf(", this is the float: %.2f\n", (*ptr).floatie);
	//Return successfully
	return 0;
	
}
