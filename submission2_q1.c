#include<stdio.h>
void moveZero(int arr[], int sizeArr);
int main(){
	int arr[5], sizeArr=sizeof(arr)/sizeof(arr[0]), i;
	printf("Enter the array: ");
	for(i=0;i<sizeArr;i++){
		scanf("%d", &arr[i]);
	}
	moveZero(arr, sizeArr);
	return 0;
}
void moveZero(int arr[],int sizeArr){
	int j, temp, k=0;
	for(j=0;j<sizeArr;j++){
		if(arr[j]!=0){
			arr[k++]=arr[j];
		}	
	}
    for(j=k;j<sizeArr;j++){
    	arr[j]=0;
}
    for(j=0;j<sizeArr;j++){
    	printf("%d", arr[j]);
	}
}
