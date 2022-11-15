#include <stdio.h>
#include <stdlib.h>
 

typedef struct TreeNode {
	int data;
    TreeNode *left, *right;
 }TreeNode;
 
 
 #define SIZE 100
 int top = -1;
 TreeNode *stack[SIZE];
 
 
 void push(TreeNode *r) {
 	if(top < SIZE -1)  //if stack is not full
 	  stack[++top] = r;
 }
 
 TreeNode *pop() {
 	TreeNode *tmp = NULL;
 	if(top >= 0) {
 	tmp = stack[top--];
	 }
	 return tmp;
 }
 
 
 
 void inorder(TreeNode *root) {
 	while(1) {
 		for(; root; root = root->left)
 		push(root);
 		root = pop();
 		
 		if(!root) break;
 		printf("%d ", root->data);
 		root = root->right;
	 }
 }
 
 
  TreeNode n1 = {1, NULL, NULL};
 TreeNode n2 = {4, &n1, NULL};
 TreeNode n3 = {15, NULL, NULL};
 TreeNode n4 = {26, NULL, NULL};
 TreeNode n5 = {20, &n3, &n4};
 TreeNode n6 = {15, &n2, &n5};
 TreeNode *root = &n6;
 
 
int main() {
	
    printf("\nInorder = ");
	inorder(root);
	
	return 0;
}
