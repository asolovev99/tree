#include <stdlib.h>

#include "Class_binary_search_tree.h"

int main()
{
	//char* test_pointer = NULL;
	char* test_string = "00a";

	struct BinarySearchTree* test_tree = NULL;

	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "01b";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "00a";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "00b";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "01c";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "02a";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "03a";
	create_or_add(&test_tree, test_string);

	//test_pointer = test_string;
	//free(test_string);
	test_string = "10a";
	create_or_add(&test_tree, test_string);

	print_tree(test_tree);

	//free(test_string);
	delete_tree(&test_tree);

	return 0;
}