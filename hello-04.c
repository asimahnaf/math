#include <stdio.h> 
int large_number(int arr[], int n);

  
 int main() 
 {   
     int arr[] = {10, -20, 30, 60, 40, 70, 50, -100};
     int size = 8;
     int max = large_number(arr, size);
     printf("%d\n", max);

     return 0; 

 }   

 int large_number(int arr[], int n){

     int max = arr[0];

     for(int i = 0; i<n; i++){
         if(max < arr[i]){
             max = arr[i];
         }
         

     }
     return max;

 }
