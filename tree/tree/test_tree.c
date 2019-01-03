#include"lcsr_tree.h"

int main(void)
{

	lcsr_node * root = lcsr_create_node('a');

	lcsr_node*b= lcsr_create_node('b');
	lcsr_node*c = lcsr_create_node('c');
	lcsr_node*d = lcsr_create_node('d');
	lcsr_node*e = lcsr_create_node('e');
	lcsr_node*f = lcsr_create_node('f');
	lcsr_node*g = lcsr_create_node('g');
	lcsr_node*h = lcsr_create_node('h');
	lcsr_node*i = lcsr_create_node('i');
	lcsr_node*j = lcsr_create_node('j');
	lcsr_node*k = lcsr_create_node('k');

	lcsr_add_child_node(root, b);
	lcsr_add_child_node(b, c);
	lcsr_add_child_node(b, d);
	lcsr_add_child_node(d, e);
	lcsr_add_child_node(d, f);

	lcsr_add_child_node(root, g);
	lcsr_add_child_node(g, h);

	lcsr_add_child_node(root, i);
	lcsr_add_child_node(i, j);
	lcsr_add_child_node(j, k);

	lcsr_print_tree(root, 0);

	lcsr_destroy_tree(root);

	return 0;
}