#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

void print_fahr_cel(int fahr);

int main(int argc, char* argv[])
{
  int fahr;
  for(fahr = LOWER; fahr <= UPPER; fahr += STEP)
    print_fahr_cel(fahr);
}

void print_fahr_cel(int fahr)
{
  float cel = 5 * (fahr-32) / 9.0f;
  printf("%3d\t%6.1f\n", fahr, cel);
}
