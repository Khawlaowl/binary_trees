#include <stddef.h>
#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
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

/**
 * struct  QueueNode - queue node
 *
 * @node: binarytree struct
 * @next: Pointer to the next node
 */
typedef struct QueueNode
{
	binary_tree_t *node;
	struct QueueNode *next;
} QueueNode;

/**
 * struct  Queue - queue node
 *
 * @front: points to the front of the queue
 * @rear: pointq to the rear of the queue
 */
typedef struct Queue
{
	QueueNode *front;
	QueueNode *rear;
} Queue;

/* Printing helper function */
void binary_tree_print(const binary_tree_t *);

/* Task function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
                                     const binary_tree_t *second);
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int));
int binary_tree_is_complete(const binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree);
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);


/* add update */
bst_t *bst_insert(bst_t **tree, int value);
int is_bst_helper(const binary_tree_t *tree, int lo, int hi);
int binary_tree_is_bst(const binary_tree_t *tree);
bst_t *bst_remove(bst_t *root, int value);
bst_t *bst_remove_recursive(bst_t *root, bst_t *node, int value);
bst_t *bst_search(const bst_t *tree, int value);
bst_t *array_to_bst(int *array, size_t size);

size_t height(const binary_tree_t *tree);
int is_avl_helper(const binary_tree_t *tree, int lo, int hi);
int binary_tree_is_avl(const binary_tree_t *tree);

size_t height(const binary_tree_t *tree);
int balance(const binary_tree_t *tree);
avl_t *avl_insert_recursive(avl_t **tree, avl_t *parent,
		avl_t **new, int value);
avl_t *avl_insert(avl_t **tree, int value);

avl_t *array_to_avl(int *array, size_t size);

void bal(avl_t **tree);
int successor(bst_t *node);
int remove_type(bst_t *root);
bst_t *bst_remove(bst_t *root, int value);
avl_t *avl_remove(avl_t *root, int value);

avl_t *aux_sort(avl_t *parent, int *array, int begin, int last);
avl_t *sorted_array_to_avl(int *array, size_t size);
size_t binary_tree_size(const binary_tree_t *tree);
int tree_is_complete(const binary_tree_t *tree, int i, int cnodes);
int binary_tree_is_complete(const binary_tree_t *tree);
int check_parent(const binary_tree_t *tree);
int binary_tree_is_heap(const binary_tree_t *tree);
int height(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);
void swap(heap_t **arg_node, heap_t **arg_child);
heap_t *heap_insert(heap_t **root, int value);
heap_t *array_to_heap(int *array, size_t size);
heap_t *max(heap_t *tree);
void recurse_extract(heap_t *tree);
int heap_extract(heap_t **root);
size_t tree_size(const binary_tree_t *tree);
int *heap_to_sorted_array(heap_t *heap, size_t *size);


#endif
