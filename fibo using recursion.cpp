#include<stdio.h>
int Fibonacci(int n){
   if(n==0||n==1)
      return n;
   else
      return (Fibonacci(n-1)+Fibonacci(n-2) );
} 
int main(){
   int c,n,i=0;
   printf("Enter the number of terms in the series : ");
   scanf("%d",&n); 
   printf("Fibonacci series\n"); 
   for (int c=1;c<=n;c++){
      printf("%d\n", Fibonacci(i));
      i++; 
   }
   return 0;
}

