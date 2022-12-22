#include<stdio.h>

int queue[50], x, n, choice;
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();

void main() {
  printf("#####circular queue operations#####");
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
  if ((rear + 1) % n == front) {
    printf("\noverflow\n");

  } else {
    printf("\nenter element to insert\n");
    scanf("%d", & x);
    if (front == -1 && rear == -1) {
      front = rear = 0;
      queue[rear] = x;
    } else {
      rear = (rear + 1) % n;
      queue[rear] = x;
    }
    printf("\nenqued=%d", queue[rear]);
  }
}

void dequeue() {
  if (front == -1 && rear == -1) {
    printf("\nunderflow\n");

  } else {
    printf("\ndequed=%d\n", queue[front]);
    if (front == rear) {
      front = rear = -1;
    } else {
      front = (front + 1) % n;

    }

  }
}

void display() {
  int i = front;
  if (front == -1 && rear == -1) {
    printf("\nunderflow\n");
  } else {
    while (i != rear) {
      printf("%d ", queue[i]);
      i = (i + 1) % n;
    }
    printf("%d", queue[rear]);
  }

}
