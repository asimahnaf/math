#include <stdio.h> 
double pi = 3.1416;

  
 int main() 
 {   
     double r, area;
     printf("Input your circle radius: \n");
     scanf("%lf", &r);
     area = (pi*r*r);
     printf("Area of a circle is %0.2lf\n", area);


     return 0; 

 }   

 
