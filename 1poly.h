#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int coe;
    int pow;
    int val;
    struct Node*next;
}Node;
 Node*initialize(){

    return NULL;
}
Node*createNode(int x,int y){
    Node*node=(Node*)malloc(sizeof(Node));
    node->coe=x;
    node->pow=y;
    node->next=NULL;
}

void insert_last(Node**start,int x,int y){
    Node*newnode=createNode(x,y);
    if(*start==NULL){
        *start=newnode;
      }
    else{
        Node*temp=*start;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newnode;
    }
}

// Node * search(Node *start,int y){
//     Node *current  = start;
//     while(current !=NULL){
//         if(current->pow == y)
//             return current;
//     }
//     printf("\nNode with %d value not found",y);
//     return NULL;

// }

int isempty(Node*start){
    if(start==NULL){
        printf("empty linklist\n");
        return 1;
    }
    else{
    return 0;
    }
}
void show(Node*start){
    if(!isempty(start)){
    
        while(start!=NULL){
            
            if(start->coe>=0)
                printf("+");
                printf("%d x^%d\t", start->coe, start->pow);
                start=start->next;

        }
    }
}