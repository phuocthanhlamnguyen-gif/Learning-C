#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

int main (void)
{
	int filedescriptor = open("testfile.txt", O_WRONLY | O_CREAT, S_IRWXU);

	if (filedescriptor < 0)
	{
		printf("The open operation failed...");
		return -1;
	}
	else 
	{
		printf("The open operation succeeded!\n");
	}
	
	char buffer[] ="Writing test data to the file";
	int writertn = write(filedescriptor, buffer, sizeof(buffer) - 1);
	if (writertn == -1)
	{
		printf("The write operation failed...");
		return -1;
	}
	else
	{
		printf("The write operation succeeded!");
	}

	if (close(filedescriptor) != 0)
	{
		printf("The close operation failed...");
		return -1;
	}

	return 0;

}



