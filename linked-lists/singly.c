#include <stdio.h>

typedef struct{
  int data;
  struct node* next;
} Node;

Node* insert(Node* head, int data){
  Node* temp = (Node*)malloc(sizeof(Node));
  temp->data = data;
  temp->next = NULL;
  if(head == NULL){
    head = temp;
  }
  return temp;
}

int main(){

   return 0;
}