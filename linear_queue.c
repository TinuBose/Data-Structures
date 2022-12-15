#include<stdio.h>

int queue[50], x, n, i, choice;
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();

void main() {
  printf("#####queue operations#####");
  printf("\nenter size of the queue\n");
  scanf("%d", & n);
  do {
    printf("\n\nselect an option\n\n");
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
  while (choice != 4);
}
void enqueue() {
  if (rear == n - 1) {
    printf("\noverflow\n");
    printf("select another option");
  } else {
    printf("\nenter data to enter\n");
    scanf("%d", & x);
    if (front == -1 && rear == -1) {
      front = rear = 0;
      queue[rear] = x;
    } else {
      rear++;
      queue[rear] = x;
    }
	printf("\nenqued=%d\n",queue[rear]);
  }
}

void dequeue() {
  if (front == -1) {
    printf("\nunderflow\n");
    printf("\nselect another option\n");
  } else if (front == rear) {
    front = rear = -1;
  } else {
    printf("deleted = %d", queue[front]);
    front++;
  }
}

void display() {
  if (front == -1 && rear == -1) {
    printf("\nEmpty queue\n");
  } else {
    printf("\nqueue elements are:\n");
    for (i = front; i <= rear; i++) {
      printf("%d  ", queue[i]);
    }
  }

}
