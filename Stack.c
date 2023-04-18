#include <stdio.h>
int main(){

int arr[5];

int temp;
int choice;
int top = -1;
do
{
    
printf("\n\nEnter 1. to push 2. to pop 3. to display 4 to exit : ");
scanf("%d",&choice);
if(choice == 1){
    if(top== 5){
        printf("Stack is full !!");
    }
    else{
printf("Enter integer to push :");
scanf("%d",&temp);
arr[top]= temp ;
top= top + 1;
printf("\n\tSuccesfully pushed !!");
}
}
else if(choice == 2){
   
    
    if (top == -1)
    {
      printf("stack is empty !!");
    }
    else{
        top = top - 1 ;
    temp = arr[top];
    
    printf("\n\tSuccesfully poped !!"); 
    }
}
else if(choice == 3){
    for( int i = 0 ; i <= top ; i++ )
    {
     printf("%d at index %d \n ", arr[i] , i);
    }
}
} while (choice != 4);

    return 0;
}
