#include <stdio.h>

int main()
{
    
 float cost ,distance,mileage;
   printf("Mileage calculator: ");
   
   printf("\nPetrol Cost:");
   scanf("%f",&cost);
   printf("\nMileage:");
   
   scanf("%f",&mileage);
   
   printf("\nDistance:");
   
   scanf("%f",&distance);
   
   printf("Weekly cost of your petrol is: %.2f\n",(distance*7*cost)/mileage);
   
   printf("Monthly cost of your petrol approx 30 days:%.2f",(distance*30*cost)/mileage);
   
   
}   

