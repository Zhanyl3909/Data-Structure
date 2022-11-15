#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
}TreeNode;

int main() {
	TreeNode *n1, *n2, *n3;
	
	n1 = (TreeNode*)malloc(sizeof(TreeNode));
	n2 = (TreeNode*)malloc(sizeof(TreeNode));
	n3 = (TreeNode*)malloc(sizeof(TreeNode));
	
	n1->val = 10;
	n1->left = n2;
	n1->right = n3;
	
	n2->val = 20;
	n2->left = NULL;
	n2->right = NULL;
	
	n3->val = 30;
	n3->left = NULL;
	n3->right = NULL;
	
	printf("root = %d, left child = %d, right child = %d \n", n1->val, n1->left->val, n1->right->val);
	return 0;
}
