#include <stdio.h> 
double pi = 3.1416;
double Area_of_a_circle(double r);

 int main() 
 {   
     double r, area;
     printf("Input your circle radius: ");
     scanf("%lf", &r);
     double circle = Area_of_a_circle(r);
     printf("Area of a circle is %0.2lf\n", circle);


     return 0; 

 }  

double Area_of_a_circle(double r){
    double area = (pi*r*r);
    return area;
}

 
