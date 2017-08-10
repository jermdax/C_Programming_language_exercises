#include <stdio.h>

#define MAX_WORD_LENGTH 20

//print histogram of lengths of words in input
//but print vertical histogram instead of horizontal
int main(int argc, char* argv[])
{
  int c, i, j, more_to_come;
  int nch = 0;
  more_to_come = 1;
  //limit ourselves
  int lengths[MAX_WORD_LENGTH];

  for(i = 0; i < MAX_WORD_LENGTH; ++i) lengths[i] = 0;

  while((c = getchar()) != EOF)
  {
    if(c != '\t' && c != '\n' && c != ' ')
      ++nch;
    else if (nch != 0)
    {
      if(nch <= MAX_WORD_LENGTH)
        ++lengths[nch-1];
      else
        ++lengths[MAX_WORD_LENGTH-1];
      nch = 0;
    }
  }

  for(i = 0; i < MAX_WORD_LENGTH; ++i)
    if(i != MAX_WORD_LENGTH-1)
      printf("%3d", i);
    else
      printf(">%2d", i);

  printf("\n");

  j = 0;
  while(more_to_come)
  {
    more_to_come = 0;
    for(i = 0; i < MAX_WORD_LENGTH; ++i)
    {
      if(lengths[i] > j)
      {
        more_to_come = 1;
        printf("  #");
      }
      else
        printf("   ");
    }
    printf("\n");
    ++j;
  }

  return 0;
}
