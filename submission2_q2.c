#include<stdio.h>
#include<string.h>
void reverseString(char s[], int sSize);
int main(){
	
    char s[]={'h','e','l','l','o'};
    int sSize= sizeof(s)/sizeof(s[0]), i;
	printf("s = ");
	
		printf("%s", s);
	    printf("\n");
	reverseString(s, sSize);
	return 0;
}
void reverseString(char s[], int sSize){
	int j,start=0, end= sSize-1, temp;
	while(start<end){
		temp=s[start];
		s[start]=s[end];
		s[end]=temp;
		start++;
		end--;
	}
	
	for(j=0; j<sSize ; j++){
		printf("%c", s[j]);
	}
}
