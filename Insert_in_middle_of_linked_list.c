#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

void insert_end(int val){
    struct Node* newnode=malloc(sizeof(struct Node));
    newnode->data=val;newnode->next=NULL;
    if(!head){head=newnode;return;}
    struct Node* temp=head;
    while(temp->next)temp=temp->next;
    temp->next=newnode;
}

void insert_middle(int val){
    int len=0;
    struct Node* temp=head;
    while(temp){len++;temp=temp->next;}
    int pos=len/2;
    struct Node* newnode=malloc(sizeof(struct Node));
    newnode->data=val;
    temp=head;
    for(int i=0;i<pos-1;i++)temp=temp->next;
    newnode->next=temp->next;
    temp->next=newnode;
}

void display(){
    struct Node* temp=head;
    while(temp){printf("%d ",temp->data);temp=temp->next;}
    printf("\n");
}

int main(){
    insert_end(10);insert_end(20);insert_end(30);
    insert_middle(15);
    display();
    return 0;
}
