#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct snode {
  char* str;
  int len;

  struct snode *next;
};

