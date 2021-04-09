#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct BinarySearchTree
{
	char* word;
	struct BinarySearchTree* left_son;
	struct BinarySearchTree* right_son;

} BinarySearchTree;

void create(BinarySearchTree** tree_input, char* data_input)
{
	if (tree_input != NULL && *tree_input == NULL)
	{
		*tree_input = malloc(sizeof(BinarySearchTree));
		(*tree_input)->word = (char*)malloc(sizeof(char) * (strlen(data_input) + 1));

		strcpy((*tree_input)->word, data_input);
		(*tree_input)->left_son = NULL;
		(*tree_input)->right_son = NULL;
	}
}

void create_or_add(BinarySearchTree** tree_input, char* data_input)
{
	BinarySearchTree** current_element = tree_input;

	if (current_element != NULL)
	{
		while (*current_element != NULL)
		{
			if (strcmp(data_input, (*current_element)->word) <= 0)
			{
				current_element = &((*current_element)->left_son);
			}
			else
			{
				current_element = &((*current_element)->right_son);
			}
		}

		create(current_element, data_input);
	}
	/*if (tree_input != NULL)
	{
		while (current_element != NULL)
		{
			if (strcmp(data_input, current_element->word) < 0)
			{
				if (tree_input)
				{

				}
				else
				{

				}
			}
			else if (1)
			{

			}
			else
			{

			}
		}	
	}*/
}

void delete_tree(BinarySearchTree** tree_input)
{
	if (tree_input != NULL && *tree_input != NULL)
	{
		BinarySearchTree* current_element = *tree_input;

		if (current_element->left_son != NULL)
		{
			delete_tree(&(current_element->left_son));
		}

		if (current_element->right_son != NULL)
		{
			delete_tree(&(current_element->right_son));
		}

		free(current_element);
	}
}

void print_tree(BinarySearchTree* tree_input)
{
	if (tree_input != NULL)
	{
		if (tree_input->left_son != NULL)
		{
			print_tree(tree_input->left_son);
		}	

		printf("%s\n", tree_input->word);

		if (tree_input->right_son != NULL)
		{
			print_tree(tree_input->right_son);
		}		
	}
}