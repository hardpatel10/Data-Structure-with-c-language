#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of inputs:");
    scanf("%d",&n);
int a[50];
printf("Enter %d inputs :",n);
for(int m = 0 ; m < n ; m++){
    scanf("%d",&a[m]);
}

    int min;
    for(int i = 0; i < n - 1; i++) {
        min = i;
        for(int j = i + 1; j < n; j++) {
            if(a[min] > a[j]) {
                min = j;
            }
        }
        if(min != i)
        {
            int temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    printf("Sorted Array: ");
    for(int i = 0; i < n; i++)  {
        printf(" %d", a[i]);
    }
    return 0;
}
