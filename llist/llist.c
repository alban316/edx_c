#include <stdio.h>
#include <stdlib.h>


/*
This is not part of the edX C on Linux class.
It's just additional, independent practice/refresher for me.
*/

struct node {
  int x;
  struct node *next;
};


struct node *node_append(struct node *node, int value) {
  struct node *next = node->next = (struct node *) malloc (sizeof(struct node));
  next->x = value;
  return next;
};


void node_dump(struct node *node) {
  do {
    printf("%d\n", node->x);
    node = node->next;
  } while (node != NULL);
}


int main() {
  struct node *root;
  root = (struct node *) malloc (sizeof(struct node));

  int input;

  struct node *next = root;

  printf("Enter a number. (-1 to quit): ");
  scanf("%d", &input);
  next->x = input;

  while (input != -1) {
    printf("Enter a number. (-1 to quit): ");
    scanf("%d", &input);
    next = node_append(next, (int) input);
  }

  node_dump(root);

  return 0;
}
