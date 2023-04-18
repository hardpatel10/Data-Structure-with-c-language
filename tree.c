#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
typedef struct node NODE;

NODE *create()
{

    NODE *p;
    int x;
    printf("Enter data (enter '-1' for NULL ) :");
    scanf("%d", &x);
    printf("\n");
    if (x == -1)
    {
        return 0;
    }
    else
    {
        p = (NODE *)malloc(sizeof(NODE));
        p->data = x;
        printf("For left child of %d \n", x);
        p->left = create();
        printf("\n");
        printf("For right child of %d \n", x);
        p->right = create();
        printf("\n");
        return p;
    }
}
NODE preorder(NODE *t)
{
    if (t != NULL)
    {
        printf(" %d ", t->data);
        preorder(t->left);
        preorder(t->right);
    }
}
NODE inorder(NODE *t)
{
    if (t != NULL)
    {
        inorder(t->left);
        printf(" %d ", t->data);
        inorder(t->right);
    }
}
NODE postorder(NODE *t)
{
    if (t != NULL)
    {
        postorder(t->left);
        postorder(t->right);
        printf(" %d ", t->data);
    }
}
int main()
{
    NODE *root = create();

    printf("pre order form \n ");
    preorder(root);
    printf("\n");
    printf("in order form \n ");
    inorder(root);
    printf("\n");
    printf("post order form \n ");
    postorder(root);
    return 0;
}
