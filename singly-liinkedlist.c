#include <stdio.h>
#include <stdlib.h>

struct node
{
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
        printf("Memory not allocated!!");
    }
    else
    {
        int data;
        printf("Enter the data :");
        scanf("%d", &data);
        new->next = head;
        new->data = data;
        head = new;
        printf("succesfully added!!");
    }
}
void insertatend()
{
    NODE *new, *temp;
    new = (NODE *)malloc(sizeof(NODE));

    if (new == NULL)
    {
        printf("Memory not allocated!!");
    }
    else
    {
        int data;
        printf("Enter the data :");
        scanf("%d", &data);
        new->data = data;
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = new;
        new->next = NULL;
        printf("\nsuccesfully added!!");
    }
}
void randominsertion()
{
    int i, loc, data;
    NODE *new, *temp;
    new = (NODE *)malloc(sizeof(NODE));
    if (new == NULL)
    {
        printf("Memory not allocted\n");
    }
    else
    {
        temp = head;
        printf("Enter the data :");
        scanf("%d", &data);
        new->data = data;
        printf("Enter the position :");
        scanf("%d", &loc);
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
            if (temp == NULL)
            {
                printf("Cant add !!\n");
                return;
            }
        }
        new->next = temp->next;
        temp->next = new;
        printf("added succesfull\n");
    }
}
void randomdeletion()
{
    int i, loc;
    NODE *temp, *temp1;
    printf("enter the position of node to be deleted :");
    scanf("%d", &loc);
    temp = head;
    for (i = 0; i < loc; i++)
    {
        temp1 = temp;
        temp = temp->next;
   
        if (temp == NULL)
        {
            printf("Can't delete \n");
            return;
        }
    }
    temp1->next = temp->next;
    free(temp);
    printf("deleted %d node \n", i + 1);
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
            printf("\n value %d address %p ", temp->data, temp->next);
            temp = temp->next;
        }
    }
}
void deletefrombig()
{
    NODE *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    temp = head;
    if (head == NULL)
    {
        printf("Link is empty!!");
    }
    else
    {
        head = temp->next;
        free(temp);
    }
}
void deletefromend()
{
    NODE *temp;
    temp = head;
    if (head == NULL)
    {
        printf("list is empty!!");
    }
    else if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);

        temp->next = NULL;
    }
}
void search(){
    int data;
    int i;
    NODE *temp;
    printf("Enter data to be search :");
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
            case 4:
            {
                deletefromend();
                break;
            }
            case 5:
            {
                randominsertion();
                break;
            }
            case 6:
            {
                randomdeletion();
                break;
            }
            case 7:
            {
                display();
                break;
            }
            case 8:
            {
                search();
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
