#include<stdio.h>
#include<stdlib.h>

 struct Node{
    int data;
    struct Node *next;
}; 

void linkedistTraversal(struct Node *ptr){
 while (ptr != NULL)
 {
    printf("Elements : %d\n",ptr->data);
    ptr = ptr->next;
 }
}
void main(){
  struct Node *head;
  struct Node *second;
  struct Node *third;
  struct Node *fourt;

  head = (struct Node *)malloc(sizeof(struct Node));
  second = (struct Node *)malloc(sizeof(struct Node));
  third = (struct Node *)malloc(sizeof(struct Node));
  fourt = (struct Node *)malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;
  
  second->data = 77;
  second->next = third;

  third->data = 777;
  third->next = fourt;

  fourt->data = 7777;
  fourt->next = NULL;

  linkedistTraversal(head);
}





























// #include <stdio.h>
// #include <stdlib.h>
 
// struct Node
// {
//     int data;
//     struct Node *next;
// };
 
// void linkedListTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element: %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
 
// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;
 
//     // Allocate memory for nodes in the linked list in Heap
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));
 
//     // Link first and second nodes
//     head->data = 7;
//     head->next = second;
 
//     // Link second and third nodes
//     second->data = 11;
//     second->next = third;
 
//     // Link third and fourth nodes
//     third->data = 41;
//     third->next = fourth;
 
//     // Terminate the list at the third node
//     fourth->data = 66;
//     fourth->next = NULL;
 
//     linkedListTraversal(head);
//     return 0;
// }

