#include<stdio.h>
#include<stdlib.h>
#include "snode.h"
typedef struct snode node_t;

node_t * setup() {
    //TODO:copy setup func from previous task
    node_t * head;
  node_t* node1;
  head = malloc(sizeof(node_t*));
  node1 = malloc(sizeof(node_t*));
  
  strcpy(head -> str, "hello");
  head -> len = 5;
  
  strcpy(node1 -> str, "there");
  node1 -> len = 5;
  
  head -> next = node1;
  
  node1 = malloc(sizeof(node_t*));
  strcpy(node1 -> str, "prof");
  node1 -> len = 4;
  head -> next -> next = node1;
  return head;
}

void teardown(node_t* head) {
  node_t* tmp = head;
  while (head != NULL){
    tmp = tmp -> next;
    head = tmp;
  }
 free(tmp);
}

void add(node_t ** head, char * str, int len){
    //TODO: implement add to add a new node to front, pointed by head
  node_t* temp = malloc(sizeof(node_t*));
  strcpy(temp -> str, str);
  temp -> len = len;
  temp -> next = *head;
  *head = temp;
  free(temp);
}

void dump_all(node_t*);
int main (int argc, char ** argv) {
    node_t * head = setup();
    add(&head, "hi", 2);
    dump_all(head);
    teardown(head);
    return 0;
}

void dump_all(node_t * head) {
    printf("head -> ");
    node_t * cur = head;
    while(cur != NULL) {
        printf("%s ", cur->str);
	    cur = cur->next;
    }
    printf("\ndone\n ");
}
