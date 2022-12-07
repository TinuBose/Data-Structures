#include<stdio.h>

#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node * head, * temp, * newnode;
void push();
void pop();
void display();
void main() {
  int choice;
  do {
    printf("\n######stack operations######\n");
    printf("\nselect an option\n");
    printf("\n1.push\n2.pop\n3.display\n4.exit");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      display();
      break;
    case 4:
      printf("\nexit\n");
      break;
    default:
      printf("\nenter a valid option\n");
    }
  }
  while (choice != 4);
}
void push() {
  newnode = (struct node * ) malloc(sizeof(struct node));
  if (newnode == 0) {
    printf("\noverflow\n");
  } else {
    printf("\nenter data\n");
    scanf("%d", & newnode -> data);
    newnode -> next = 0;
    if (head == 0) {
      head = temp = newnode;
    } else {
      newnode -> next = head;
      head = newnode;
    }
  }
  printf("pushed %d\n", newnode -> data);
}
void pop() {
  if (head == 0) {
    printf("\n underflow \n");
  } else {
    temp = head;
    head = temp -> next;
    printf("\npopped %d\n", temp -> data);
    free(temp);

  }
}
void display() {
  if (head == 0) {
    printf("\nempty\n");
  } else {
    temp = head;
    while (temp != 0) {
      printf("%d\t", temp -> data);
      temp = temp -> next;
    }
  }
}
