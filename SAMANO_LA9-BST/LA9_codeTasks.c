#include <stdio.h>
#include <stdlib.h>

struct node {
  int key;
  struct node *left, *right;
};

// Create a node
struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Function Prototype
void inorder(struct node *root);
struct node *insert(struct node *node, int key);
struct node *insert(struct node *node, int key);
struct node *minValueNode(struct node *node);
struct node *deleteNode(struct node *root, int key);
struct node* search(struct node *root, int key);
void BSTmenu();
// Driver code
int main() {
  int key;
  int generate = 1;
  char input[2];
  struct node *root = NULL;

  while (generate) {
    char BSTselection;
    do {
      BSTmenu();
      printf("Input: ");
      scanf(" %c", &BSTselection);

      switch (BSTselection) {
        case '1':
          printf("\nInsert Value to BST: ");
          scanf("%d", &key);
          root = insert(root, key);
          break;

        case '2':
          printf("\nSearch Value in BST: ");
          scanf("%d", &key);
          struct node *result = search(root, key);
          printf("\n");
          if (result != NULL){
            printf("\n[]================================[]");
            printf("\n Element with Key %d: Found", result->key);
            printf("\n[]================================[]\n");
          }else{
            printf("\n[]================================[]");
            printf("\n Element with Key %d: Not Found", result->key);
            printf("\n[]================================[]\n");
          }
          break;

        case '3':
          printf("\nDelete Value in BST: ");
          scanf("%d", &key);
          root = deleteNode(root, key);
          printf("\n");
          printf("\n[]================================[]");
          printf("\nAfter Deleting: ");
          inorder(root);
           printf("\n[]================================[]\n");
          break;

        case '4':
          printf("\n[]================================[]");
          printf("\n Inorder traversal: ");
          inorder(root);
          printf("\n[]================================[]\n");
          break;

        case '5':
          break;

        default:
          printf("Invalid choice. Please enter a valid option.\n");
          break;
      }
    } while (BSTselection != '5');

    printf("\nPress any key to regenerate again. Press 'x' to quit: ");
    scanf(" %1s", input);

    if (input[0] == 'x' || input[0] == 'X') {
      generate = 0;
      printf("\n");
    }
  }

  return 0;
}

// Inorder Traversal
void inorder(struct node *root) {
  if (root != NULL) {
    // Traverse left
    inorder(root->left);

    // Traverse root
    printf("-> %d ", root->key);

    // Traverse right
    inorder(root->right);
  }
}

// Insert a node
struct node *insert(struct node *node, int key) {
  // Return a new node if the tree is empty
  if (node == NULL) return newNode(key);

  // Traverse to the right place and insert the node
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);

  return node;
}

// Find the inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;

  // Find the leftmost leaf
  while (current && current->left != NULL)
    current = current->left;

  return current;
}

// Deleting a node
struct node *deleteNode(struct node *root, int key) {
  // Return if the tree is empty
  if (root == NULL) return root;

  // Find the node to be deleted
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);

  else {
    // If the node is with only one child or no child
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }

    // If the node has two children
    struct node *temp = minValueNode(root->right);

    // Place the inorder successor in position of the node to be deleted
    root->key = temp->key;

    // Delete the inorder successor
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}

//search
struct node* search(struct node *root, int key){
  printf("\n[]================================[]");
   printf("\n Visiting elements: ");
   while(root->key != key) {
      if(root != NULL) {
         printf("-> %d ",root->key);
         
         //go to left tree
         if(root->key > key) {
            root = root->left;
         }//else go to right tree
         else {
            root = root->right;
         }
         
         //not found
         if(root == NULL) {
            return NULL;
         }
      }
   }
   printf("\n[]================================[]");
   return root;
}

void BSTmenu() {
  printf("\n=========================================\n");
  printf("||<<<<        LA9 Task Code        >>>>||\n");
  printf("=========================================\n");
  printf("||     [1] Insert    ||    [2] Search  ||\n");
  printf("=========================================\n");
  printf("||     [3] Delete    ||    [4] Display ||\n");
  printf("=========================================\n");
  printf("||               [5] Exit              ||\n");
  printf("=========================================\n");
  printf("||<<<<        Select Command       >>>>||\n");
  printf("=========================================\n\n");
}

