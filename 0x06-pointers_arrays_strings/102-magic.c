#include <stdio.h>

/*
 * n: An integer variable used to store an integer value.
 * a: An array of integers with a size of 5 elements.
 * p: A pointer to an integer, which will be used to point to the memory address of the integer variable n.
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
*(p + 5) = 98;
  /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

