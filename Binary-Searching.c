#include <stdio.h>
int binary(int arr[] , int l , int r , int x ){
	if(r >= l){
int mid = l + (r - l ) / 2 ; 
if(arr[mid] == x ){
	return mid ; 
}
else if (mid > x ){
	return binary(arr , l , mid - 1 , x );
}
else{
	return binary(arr , mid + 1 , r , x );
}



	}
	else{
		return -1 ;
	}
}



int main(){
int arr[5] = {10 , 54 , 69 , 87 , 88 };

int n = sizeof(arr) / sizeof(arr[0]);
int x = 87;
int result = binary(arr , 0 , n - 1 , x );
if (result == -1)
{
	printf("Element not found !!");
}
else{
	printf("Element %d found at index %d \n", x , result);

}

return 0;
}
