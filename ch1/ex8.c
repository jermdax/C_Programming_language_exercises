#include <stdio.h>

int main(int argc, char* argv[])
{
  int c;
  int blanks, tabs, nls;
  blanks = tabs = nls = 0;

  while((c = getchar()) != EOF)
  {
    if(c == '\n')
      ++nls;
    else if(c == ' ')
      ++blanks;
    else if(tabs == '\t')
      ++tabs;
  }
  printf("tabs: %d, blanks: %d, nls: %d\n", tabs, blanks, nls);
  return 0;
}
