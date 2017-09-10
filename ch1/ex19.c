#include <stdio.h>

#define MAX_LINE_LEN 1024

int readline(char* buf, int max)
{
  int i = 0, ch;
  while((ch = getchar()) != EOF && ch != '\n' && i < max-1)
    buf[i++] = ch;
  buf[i] = '\0';
  return i;
}

void reverse(char* s)
{
  int len, i;
  char tmp;
  for(len = 0; s[len] != '\0'; ++len)
    ;
  --len; //leave '\0' where it is
  for(i = 0; i < len; ++i, --len)
  {
    tmp = s[i];
    s[i] = s[len];
    s[len] = tmp;
  }
}

int main(int argc, char* argv[])
{
  char buf[MAX_LINE_LEN];
  char *ch;
  int nread;
  while(readline(buf, MAX_LINE_LEN) != 0)
  {
    reverse(buf);
    ch = buf;
    while(*ch != '\0')
      putchar(*ch++);
    putchar('\n');
  }


  return 0;
}
