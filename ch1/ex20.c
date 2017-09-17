#include <stdio.h>

#define SPACES_PER_TAB 4

int main(int argc, char* argv[])
{
  int c, cnt, i;
  cnt = 0;

  while((c = getchar()) != EOF)
  {
    if(c != '\t')
      putchar(c);
    else
      for(;cnt < SPACES_PER_TAB; ++cnt)
        putchar(' ');

    ++cnt;
    if(c == '\n' || cnt >= SPACES_PER_TAB)
      cnt = 0;
  }
  return 0;
}
