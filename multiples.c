#include<stdio.h> 
 int main() 
 { 
   int i=1,n; 
   printf("enter termination point: "); 
   scanf("%d",&n); 
   do 
   { 
      if( i % 5 == 0 ) 
      { 
         printf("\n%d ",i); 
      } 
      i++; 
   } while( i < n ); 
   return 0; 
 } 