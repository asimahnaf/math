#include <stdio.h> 
int search_array(int ara[]);

 int main() 
 {   
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 100 };
    int stor = search_array(ara);

    
    

    return 0;
    
 } 


 int search_array(int ara[]){

     int low_index, high_index, mid_index, num;
    low_index = 0;
    high_index = 7;
    num = 65;
    
    while(low_index <= high_index){
        mid_index = (low_index+high_index) / 2;
        if(num == ara[mid_index]){
            break;
            
        }
        if(num < ara[mid_index]){
            high_index = mid_index - 1;

        }
        else{
            low_index = mid_index + 1;
        }

    }


    if(low_index > high_index){
        printf("%d is not in the ara\n", num);
    }else{
        printf("%d is found in the ary. ", ara[mid_index]);

            
    }
    return 0;

 }

 
