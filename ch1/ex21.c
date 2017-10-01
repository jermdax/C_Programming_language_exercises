#include <stdio.h>

#define SP_PER_TAB 4

/**
 * entab
 * As per the question, we prefer spaces over tabs, if there is a single space before a tab-boundary 
 */
int main(int argc, char*  argv[])
{
  int c;
  int nsp = 0;
  int pos_in_line = 0;
  while((c = getchar()) != EOF)
  {
    if(c == ' ')
      ++nsp;
    else
    {
      while(nsp-- > 0) putchar(' '); // Dump the spaces
      nsp = 0;
      putchar(c);
      if(c == '\n')
      {
        pos_in_line = 0;
        nsp = 0;
        continue;
      }
    }

    //If we have hit a tab boundary, print the tab
    if(++pos_in_line == SP_PER_TAB)
    {
      /* Single space at tab border should be printed as a space 
       * to prevent a space between 2 words getting displayed as a tab
       */
      char to_pr = nsp == 1 ? ' ' : '\t';
      if(nsp > 0)
      {
        putchar(to_pr);
      }
      pos_in_line = 0;
    }
  }
}
