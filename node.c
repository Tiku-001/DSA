#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
 void insert_begin(int value){
    struct node * newnode;
    newnode=(struct node *)malloc (sizeof (struct node));
    newnode_data=value;
    newnode_next=head;
    head=newnode;
 }