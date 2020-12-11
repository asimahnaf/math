#include <stdio.h> 
char change(char ara[]);

 int main() 
 {   

    char ara[] = "Bangladesh";
    change(ara);

     return 0;
  
 } 
 
 
// change the letters small to capital and capital to small

 char change(char ara[]){

     int i, leangth = 10;
    
    for(i = 0; i < leangth; i++) {     
         if(ara[i] >= 97 && ara[i] <= 122) {     
             ara[i] = 'A' + (ara[i] - 'a');     
         }     
     }  

     printf("%s\n", ara);

     for (i = 0; i < leangth; i++)
     {
         if(ara[i] <= 'a' && ara[i] <= 'z'){
             ara[i] = (97 + ara[i]) - 'A';
         }
     }

     printf("%s\n", ara); 

     return 0;

 }

 

