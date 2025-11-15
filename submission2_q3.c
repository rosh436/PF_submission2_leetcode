#include<stdio.h>
int removeDuplicates(int nums[],int numsSize);
int main(){
	int nums[]={1,2,3,4,4,4}, numsSize=sizeof(nums)/sizeof(nums[0]),i, count;
	for(i=0;i<numsSize;i++)
	printf(" %d ", nums[i]);
	printf("\n");
	count=removeDuplicates(nums, numsSize);
	printf("count for duplicates: %d\n", count);
	for(i=0;i<count;i++){
		printf("%d ", nums[i]);
	}
	
	return 0;
}
int removeDuplicates(int nums[], int numsSize){
    int k = 1; 
    for (int j = 1; j < numsSize; j++) {
        if (nums[j] != nums[j - 1]) { 
            nums[k] = nums[j];
            k++;
        }
    }

    return k;  //number of unique elements
}

