#pragma once

struct BinarySearchTree;

void create_or_add(struct BinarySearchTree** tree_input, char* data_input);

void delete_tree(struct BinarySearchTree** tree_input);

void print_tree(struct BinarySearchTree* tree_input);