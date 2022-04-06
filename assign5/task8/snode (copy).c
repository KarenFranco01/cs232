#include <stdio.h>
#include "snode.h"
#include <string.h>
#include <stdlib.h>

struct snode *snode_create(char *s)  
{ //void * data;
  struct snode* node = (struct snode*) malloc(sizeof(struct snode));
  node -> str = malloc(sizeof(char*)*strlen(s) + 1);
  strcpy(node -> str, s);
  node -> next = NULL;
  return node;
}
void snode_destroy(struct snode * s) 
{
  free(s -> str);
  free(s);
  s = NULL;
};
 
