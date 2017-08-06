#include <stdio.h>

int main(int argc, char* argv[])
{
  int c;
  char prev_ch = 0;
  while((c = getchar()) != EOF)
  {
    char cur_ch = (char)c;
    if(!(cur_ch == ' ' && prev_ch == ' '))
      putchar(c);
    prev_ch = cur_ch;
  }
  return 0;
}
