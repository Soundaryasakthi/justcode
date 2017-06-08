#include<stdio.h>
#include<limits.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node* getNewNode(int data){
struct node* newNode=(struct node*)malloc(sizeof(stuctnode));
newNode->data=data;
newNode->left=NULL;
newNode->right=NULL;
return newNode;
}
