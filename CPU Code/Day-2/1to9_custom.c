#include <stdio.h>

extern int load(int x, int y); // Initialize the function

int main() {
	int result = 0;
  int count = 9;
  result = load(0x0, count+1); //Pass arguments to the function
  printf("Sum of number from 1 to %d is %d\n", count, result); 
}
