#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char key[20];
    struct Node *left;
    struct Node *right;
} Node;

Node* createNode(char key[]) {
    Node *newNode = (Node*)malloc(sizeof(Node));

    strcpy(newNode->key, key);
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node* insert(Node *root, char key[]) {
    if (root == NULL)
        return createNode(key);

    if (strcmp(key, root->key) < 0)
        root->left = insert(root->left, key);
    else
        root->right = insert(root->right, key);

    return root;
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%s ", root->key);
        inorder(root->right);
    }
}

int bstSearch(Node *root, char key[], int *comparisons) {
    while (root != NULL) {
        (*comparisons)++;

        if (strcmp(key, root->key) == 0)
            return 1;

        if (strcmp(key, root->key) < 0)
            root = root->left;
        else
            root = root->right;
    }

    return 0;
}

int linearSearch(char arr[][20], int n, char key[], int *comparisons) {
    int i;

    for (i = 0; i < n; i++) {
        (*comparisons)++;

        if (strcmp(arr[i], key) == 0)
            return 1;
    }

    return 0;
}

int height(Node *root) {
    int leftHeight, rightHeight;

    if (root == NULL)
        return -1;

    leftHeight = height(root->left);
    rightHeight = height(root->right);

    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

void freeTree(Node *root) {
    if (root != NULL) {
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main() {
    char ids[][20] = {
        "A102", "A25", "A7", "B100",
        "B12", "A120", "B3", "A45"
    };

    char searchKeys[][20] = {
        "A7", "B12", "A120", "B3"
    };

    int n = 8;
    int i;
    Node *root = NULL;

    printf("Government Database - BST and Linear Search\n");
    printf("============================================\n\n");

    /* Creating BST */
    for (i = 0; i < n; i++) {
        root = insert(root, ids[i]);
    }

    /* Inorder traversal */
    printf("Inorder Traversal:\n");
    inorder(root);
    printf("\n\n");

    /* Tree height */
    printf("BST Height: %d\n\n", height(root));

    /* Search comparison */
    printf("Search Comparison:\n");
    printf("---------------------------------------------\n");
    printf("Key\tBST Comparisons\tLinear Comparisons\n");
    printf("---------------------------------------------\n");

    for (i = 0; i < 4; i++) {
        int bstComparisons = 0;
        int linearComparisons = 0;

        bstSearch(root, searchKeys[i], &bstComparisons);
        linearSearch(ids, n, searchKeys[i], &linearComparisons);

        printf("%s\t%d\t\t%d\n",
               searchKeys[i],
               bstComparisons,
               linearComparisons);
    }

    printf("---------------------------------------------\n");

    freeTree(root);

    return 0;
}
