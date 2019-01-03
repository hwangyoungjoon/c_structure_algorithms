#include "binary_Tree.h"

int main(void)
{

	bt_node*A = bt_create_node('A');
	bt_node*B = bt_create_node('B');
	bt_node*C = bt_create_node('C');
	bt_node*D = bt_create_node('D');
	bt_node*E = bt_create_node('E');
	bt_node*F = bt_create_node('F');
	bt_node*G = bt_create_node('G');

	A->left = B;
	B->left = C;
	B->right = D;

	A->right = E;
	E->left = F;
	E->right = G;

	printf("preorder....\n");
	bt_preorder_print(A);
	printf("\n\n");

	printf("inorder....\n");
	bt_inorder_print(A);
	printf("\n\n");

	printf("postorder....\n");
	bt_postorder_print(A);
	printf("\n\n");

	return 0;
}