#include <stdio.h>

#define MAX_WS 1024

void printws(char* ws, int len)
{
  int cur;
  for(cur = 0; cur < len; cur++)
    putchar(ws[cur]);
}

int main(int argc, char* argv[])
{
  int ch, i = 0, nch = 0;
  char ws[MAX_WS];

  while((ch = getchar()) != EOF)
  {
    if(ch == ' ' || ch == '\t')
      ws[i++] = ch;
    else
    {
      if (ch != '\n')
      {
        ++nch;
        printws(ws, i);
        putchar(ch);
      }
      else
      {
        if(nch != 0)
          putchar(ch);
        nch = 0;
      }

      i = 0;
    }
  }

  return 0;
}
