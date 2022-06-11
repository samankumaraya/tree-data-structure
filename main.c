#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;

};

struct node* newNode(int info){
    struct node* node = (struct node*) malloc(sizeof(struct node));

    node->data = info;
    node->left = NULL;
    node->right= NULL;

    return(node);

}


void printPostOrder(struct node* node){

    if (node == NULL)
        return;

    printPostOrder(node->left);
    printPostOrder(node->right);
    printf ("%d  ",node->data);
}

void printInOrder(struct node* node){

    if (node == NULL)
        return;

    printInOrder(node->left);
    printf ("%d  ",node->data);
    printInOrder(node->right);

}

void printPreOrder(struct node* node){

    if (node == NULL)
        return;

    printf ("%d  ",node->data);
    printPreOrder(node->left);

    printPreOrder(node->right);

}

int main(){

    struct node* root=newNode(6);
    root->left = newNode(2);
    root->right=newNode(8);
    root->left->left = newNode(1);
    root->left->right = newNode(4);
    root->left->right->left = newNode(3);
    root->left->right->right= newNode(5);
    root->right->left = newNode(7);
    root->right->right =newNode(9);

    printPreOrder(root);


    }
