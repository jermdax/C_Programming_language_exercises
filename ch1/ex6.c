#include <stdio.h>

int main(int argc, char* argv[])
{
  int c;
  while(c = getchar() != EOF)
    printf("c is: %d\n", c);
  printf("c is: %d\n", c);
  return 0;
}
