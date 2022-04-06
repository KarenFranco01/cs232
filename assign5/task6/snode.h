#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct snode {
  char str[101];
  int len;
  struct snode *next;
};

