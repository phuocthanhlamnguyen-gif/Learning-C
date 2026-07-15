#include <unistd.h> // For write()

#define X 15 // Make an char limit

typedef struct Char { // Other way that's different from cpp class
char var1[X]; //The variables
}Char; 

int main(void/*No Command line algument*/)
{
  Char writing = {"Hello, World!\n"}; //To say Hello, World!\n 
  write(1, writing.var1, sizeof(writing.var1)); // low-level way to say write
  return 0; // Function is over
}
