#include "stdio.h"
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

int main(){
  int pil;

  while(1){
  printf("\n+-------------------+\n");
  printf("|       Menu        |\n");
  printf("+-------------------+\n");
  printf("| 1. Insert Queue   |\n");
  printf("| 2. Delete Queue   |\n");
  printf("| 3. Display Queue  |\n");
  printf("| 4. Exit           |\n");
  printf("+-------------------+\n");
  printf("Masukkan Pilihan : ");
  scanf("%d", &pil);

  switch(pil){
    case 1 :
      insert();
      break;
    case 2 :
      delete();
      break;
    case 3 :
      display();
      break;
    case 4 :
      exit(1);
      break;
    default :
      printf("\nInput Salah !");
    }
  }
}

int insert() {
  int add;

  if(rear==MAX-1){
    printf("Queue Overflow !!!\n");
  }
  else{
    if(front==-1){
      front = 0;
      printf("Masukkan Nilai Elemen Queue : ");
      scanf("%d",&add);
      rear=rear+1;
      queue[rear] = add;
    }
  }
}

int delete() {

  if (front == -1 || front > rear){
  printf("Queue Underflow \n");
  return;
  } else {
  printf("Element Queue yang di Delete adalah : %d \n", queue[front]);
  front = front+1;
  }
}

int display() {
  int i;

  if (front == -1){
  printf("Queue kosong\n");
  } else {
  printf("Nilai Element Queue Adalah : \n");
    for(i=front;i<=rear;i++){
    printf("%d",queue[i]);
    printf(" ");
    }
  }
}
