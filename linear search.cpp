#include<stdio.h>
int main(){
	int n,i,a[10],b,e=0;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter the key :");
	scanf("%d",&b);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]==b){
			printf("%d is found in %d index",b,i);
			e+=1;
		}
	}
	if(e==0){
		printf("Element not found");
	}
}