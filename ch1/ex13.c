#include <stdio.h>

#define MAX_WORD_LENGTH 20

//print histogram of lengths of words in input
int main(int argc, char* argv[])
{
  int c, i, j;
  int nch = 0;
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
  {
    if(i == MAX_WORD_LENGTH-1)
      printf(">%2d:", i+1);
    else
      printf("%3d:", i+1);
    for(j = 0; j < lengths[i]; ++j)
      printf("=");
    printf("\n");
  }

  return 0;
}
