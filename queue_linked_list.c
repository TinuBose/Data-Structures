#include<stdio.h>

#include<stdlib.h>

struct node {
  int data;
  struct node * next;
};
struct node * head, * temp, * newnode, * prev, * front , * rear ;
int choice,max=3,count=0; 
void enqueue();
void dequeue();
void display();
void main() {
  
  do {
    printf("\n###queue using linked list###\n");
    printf("\nselect an option\n");
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
    scanf("%d", & choice);
    switch (choice) {
    case 1:
      enqueue();
      break;
    case 2:
      dequeue();
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
  while (choice != 8);
}
void enqueue() {
  //struct node *newnode;
  newnode = (struct node * ) malloc(sizeof(struct node));
  if(count == max){
   printf("\noverflow\n");
   }else{
    printf("\nenter data\n");
    scanf("%d", & newnode -> data);
    newnode -> next = 0;
   if (head == 0) {
      head  = newnode;
      //printf("\nnode inserted data=%d\n",newnode -> data);
    } else {
      newnode -> next = head;
      head = newnode;
      //printf("\n node inserteted data=%d\n",newnode -> data);
    }
    rear = newnode;

  printf("\nenqued =%d\n", rear -> data);
 
    count++;
    }
}

   





void dequeue() {
  if (count == 0) {
    printf("\n list is empty\n");
  } else {
    temp = head;
    while (temp -> next != 0) {
      prev = temp;
      temp = temp -> next;
    }
    prev -> next = 0;
    front = temp;
    printf("\ndeleted %d\n", front -> data);
    free(front);
    count--;

  }
}

void display() {
  if (count == 0) {
    printf("\nempty\n");
  } else {
    temp = head;
    while (temp != 0) {
      printf("%d\t", temp -> data);
      temp = temp -> next;
    }
  }
}
