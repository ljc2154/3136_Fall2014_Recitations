/*
 * Louis Croce
 * LJC2154
 * 3136
 * HW 2.5
 *
 * echo3.c
 * Modify the echo program to print the arguments
 * in dictionary order.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
  // i will be index of argv array
  int i;
  for (i = argc-1; i > 0; i--) {
  	// j will be index of char array argv[i]
  	int j;
  	// print chars of argv[i] in reverse order
  	for (j = strlen(argv[i]); j >= 0; j--) {
  		printf("%c", argv[i][j]);
  	}
    // print new line after each argument
    printf("\n");
  }

  return 0; 
}