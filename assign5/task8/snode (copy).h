#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct snode {
  char* str;
  void * data;
  struct snode *next;
};

struct snode *snode_create(char *s);
void snode_destroy(struct snode * s) ;
 
