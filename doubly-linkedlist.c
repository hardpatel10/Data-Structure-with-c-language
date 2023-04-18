#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *head;
typedef struct node NODE;

void insertinbegning()
{
    NODE *new;
    new = (NODE *)malloc(sizeof(NODE));
    if (new == NULL)
    {
        printf("node not created \n");
    }
    else
    {
        int data;
        printf("enter the data :");
        scanf("%d", &data);
        new->data = data;
        new->prev = NULL;
        new->next = head;
        head->prev = new;
        head = new;
        printf("Enterd succesfully");
    }
}

void insertatend()
{
    NODE *new, *temp;
    new = (NODE *)malloc(sizeof(NODE));
    if (new == NULL)
    {
        printf("node not created \n");
    }
    else
    {
        int data;
        printf("Enter the data : ");
        scanf("%d", &data);
        new->data = data;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->prev = temp;
        new->next = NULL;
        printf("entered succesfully\n");
    }
}
void deletefrombig()
{
    NODE *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    if (temp == NULL)
    {
        printf("link is empty \n");
    }
    else
    {
        temp = head;
        printf("data = %d node deleted  \n", head->data);
        head = temp->next;
        temp->prev = NULL;
        free(head);
        
    }
}
void display()
{

    NODE *temp;
    temp = head;
    if (head == NULL)
    {
        printf("nothing!");
    }
    else
    {
        printf("output of linked list : ");
        while (temp != NULL)
        {
            printf("\n prevous address %p value %d next address %p ", temp->prev, temp->data, temp->next);
            temp = temp->next;
        }
    }
}
int main()
{
    head = (NODE *)malloc(sizeof(NODE));
    if (head == NULL)
    {
        printf("Head not created !!");
    }
    else
    {
        int cho;
        int data;
        printf("Enter the data of head :");
        scanf("%d", &data);
        head->prev = NULL;
        head->data = data;
        head->next = NULL;
        do
        {
            
            printf("\n\n1. to insert in begning\n2. to insert at end\n3. delete from bigning\n4. delete from ending\n5. random insertion\n6. random deletion\n7. display\n8. search\n9. to exit\noption :");
            scanf("%d", &cho);

            switch (cho)
            {
            case 1:
            {
                insertinbegning();
                break;
            }
            case 2:
            {
                insertatend();
                break;
            }
            case 3:
            {
                deletefrombig();

                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 9:
            {

                exit(0);
            }
            default:
            {
                printf("Input error!!");
            }
            }
        } while (cho != 9);
    }

    return 0;
}
