#include <stdio.h>

#define MAX_LEN 80

void printbuf(char* buf)
{
  int i = 0;
  while(i < MAX_LEN)
    putchar(buf[i++]);
}

int main(int argc, char* argv[])
{
  int ch;
  char buf[MAX_LEN];
  int i = 0;

  while((ch = getchar()) != EOF)
  {
    if(i == MAX_LEN)
    {
      printbuf(buf);
      putchar(ch);
      ++i;
    }
    else if(i < MAX_LEN)
      buf[i++] = (char)ch;
    else
      putchar(ch);

    if(ch == '\n')
      i = 0;
  }

  return 0;
}
