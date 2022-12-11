#include<stdio.h>

#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node * head, * temp, * newnode;
int choice, n, i, stack[100], top = -1;

void push();
void pop();
void display();
void topvalue();
void main() {
  printf("enter stack size");
  scanf("%d", & n);
  do {
    printf("\n######stack operations######\n");
    printf("\nselect an option\n");
    printf("\n1.push\n2.pop\n3.display\n4.top\n5.exit\n");
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
      topvalue();
      break;
    case 5:
      printf("\nexit\n");
      break;
    default:
      printf("\nenter a valid option\n");
    }
  }
  while (choice != 5);
}
void push() {
  newnode = (struct node * ) malloc(sizeof(struct node));
  if (top == n - 1) {
    printf("\noverflow\n");
    printf("\nselect another option\n");
  } else {
    top++;
    printf("\nenter data\n");
    scanf("%d", & newnode -> data);
    newnode -> next = 0;
    if (head == 0) {
      head = temp = newnode;
    } else {
      newnode -> next = head;
      head = newnode;
    }
    stack[top] = head -> data;
    printf("pushed %d\n", stack[top]);
  }
}
void pop() {
  if (top == -1) {
    printf("\n underflow \n");
    printf("\nselect another option\n");
  } else {
    temp = head;
    head = temp -> next;
    printf("\npopped %d\n", stack[top]);
    top--;
    free(temp);

  }
}
void display() {
  if (top >= 0) {
    printf("\nelements is stack\n");
    for (i = top; i >= 0; i--) {
      printf("%d\t", stack[i]);
    }
  } else {
    printf("stack is empty");
  }
}
void topvalue() {
  if (top >= 0) {
    printf("top=%d", stack[top]);
  } else {
    printf("\nunderflow\n");
  }
}