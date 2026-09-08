#include <stdio.h>
#include <stdlib.h>
struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
int max(int a,int b){
    return (a > b) ? a : b;
}
int height(struct Node *N){\
    if(N == NULL){
        return 0;
      }
    return N->height;
}
struct Node *newNide(int key){
    struct Node *node = (struct Node *) malloc(sizeof(struct Node));
    node->key = key;
    node->left = NULL;
    node->right = NULL;
    node->height = 1;
    return node;
}
struct Node *rightRotate(struct Node *y){
    struct Node *x = y->left;
    struct Node *T2 = x->right;
    
    x->right = y;
    y->left = T2;
    
    y->height = max(height(y->left), height(y->right)) + 1;
    x->height = max(height(x->left), height(x-right)) + 1;
    
    return x;
}
struct Node *leftRotate(struct
