#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode {
	int data;
    TreeNode *left, *right;
 }TreeNode;
 
 
 
 TreeNode n1 = {1, NULL, NULL};
 TreeNode n2 = {4, NULL, NULL};
 TreeNode n3 = {'*', &n1, &n2};
 TreeNode n4 = {16, NULL, NULL};
 TreeNode n5 = {25, NULL, NULL};
 TreeNode n6 = {'+', &n4, &n5};
 TreeNode n7 = {'+', &n3, &n6};
 TreeNode *exp = &n7;
 
 int evaluate(TreeNode *root) {
 	if(root == NULL) return 0;
 	if(root->left == NULL && root->right == NULL){
 		return root->data;
	 }
		 else {
	 	int x = evaluate(root->left);
	 	int y = evaluate(root->right);
	 	printf("%d %c %d counting\n",x,root->data,y);
	 	
	 	switch(root->data) {
	 		case '+':
	 			return x + y;
	 		case '-':
	 			return x - y;
	 		case '*':
	 			return x * y;
	 		case '/':
	 			return x / y;
		 }
	 }
	 return 0;
 }
 
 //driver code 
 
int main(void) {
	printf("the SUM = %d \n", evaluate(exp));
	
	return 0;
}
