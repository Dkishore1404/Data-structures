#include<stdio.h>
int main() {
 int num,m,n,i;
 printf("Enter start range :");
 scanf("%d",&n);
 printf("Enter end range :");
 scanf("%d",&m);
if(m>0 && n>0 && m>n){
	printf("odd:\n");
 for(i=n;i<m;i++){
 	if(i%2!=0){
 		printf("%d\n",i);
	 }
 }
 printf("even:\n");
 for(i=n;i<m;i++){
 	if(i%2==0){
 		printf("%d\n",i);
	 }
 }
}
else{
	printf("invalid input");
}
}
