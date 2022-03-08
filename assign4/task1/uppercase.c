#include <stdio.h>

int main(int argc, char *argv[]) {
  char str[10090];
  int ch, n = 0;

  while ((ch = getchar()) != EOF && n < 1000){
    str[n] = ch;
    ++n;
  }
  for (int i = 0; i < n; i++){
    if (str[i]<='0'+9)
      putchar(str[i]);
    else
      putchar(str[i]&'_');
    }
  /*for(i=0;i<=strlen(str);i++){
      if(str[i]>=97&&str[i]<=122)
         str[i]=str[i]-32;
/* example:
 *  char str[10090];
   int ch, n = 0;
   while ((ch = getchar()) != EOF && n < 1000) {
      str[n] = ch;
      ++n;   }
   for (int i = 0; i < n; ++i)
      putchar(str[i]);
   return 0; */
   return 0;
}

