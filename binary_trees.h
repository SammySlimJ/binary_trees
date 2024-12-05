#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

/**
 *struct binary_tree_s - Binary tree node
 *
 *@n: integer stored in the node
 *@parent: Pointer to the parent node
 *@left: Pointer to the left child node
 *@right: POinter to the right child node
 */
struct binary_tree_s
{
  int n;
  struct binary_tree_s *parent;
  struct binary_tree_s *left;
  struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
/* linked list for advanced 101 the levelorder */
/**
 * struct link_s - structure for advanced tasks
 *
 *@n: depth of node specified
 *@node: node of tree to store
 *@next: next node of the linked list
 */
typedef struct link_s
{
  size_t n:
  struct binary_tree_s const *node;
  struct link_s *next;
}link_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);