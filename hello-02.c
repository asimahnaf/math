#include <stdio.h> 
  
 int main() 
 {   
  float total_student, girls, Percentage = 0;
  printf("total-student & total-girls: ");
  scanf("%f %f", &total_student, &girls);
  Percentage = ((girls/total_student)*100);
  printf("Persantage: %0.2f\n", Percentage);

  return 0;

 }   
