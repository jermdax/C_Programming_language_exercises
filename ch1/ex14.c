#include <stdio.h>

//We will only record from 0x20 (space) to 0x7E(~), all others will simply be marked as 'special' characters
//This will mark characters such as CR and LF as 'Other', but we ignore that for now
#define LOWEST_CHAR (' ')
#define HIGHEST_CHAR ('~')
#define NUM_CHARS ((HIGHEST_CHAR-LOWEST_CHAR)+2) //make sure to account for the special character too

//write a program to display a histogram of the freqencies of each character in its input
int main(int argc, char* argv[])
{
  int char_counts[NUM_CHARS];
  int c, i, j;
  for(i = 0; i < NUM_CHARS; ++i) char_counts[i] = 0;

  while((c = getchar()) != EOF)
  {
    int index = c - LOWEST_CHAR;
    if(index >= 0 && index <= HIGHEST_CHAR)
      ++char_counts[index];
    else
      ++char_counts[NUM_CHARS-1];
  }

  for(i = 0; i < NUM_CHARS; ++i)
  {
    if(i != NUM_CHARS-1)
      printf("%c: ", LOWEST_CHAR+i);
    else
      printf("Other: ");

    for(j = 0; j < char_counts[i]; ++j)
      printf("=");
    printf("\n");
  }
  return 0;
}
