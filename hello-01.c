#include <stdio.h>   
 int main() 
 {   
     int a, b, x;
     printf("inter the mcb ");
     scanf("%d %d", &a, &b);
     if(a<b){
         x = a;
     }else{
         x = b;
     }
     for(0; x>=1; --x){

         if(a%x==0 && b%x==0){
         printf("GCD: %d\n", x);
         break;
     }

    }
     

 }  
