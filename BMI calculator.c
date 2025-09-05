#include <stdio.h>
int main()
{
    float weight, height, bmi;
    
    printf("Enter the weight in kgs: ");
    scanf("%f", &weight);
    
    printf("Enter the height in meters: ");
    scanf("%f", &height);
    
    bmi = weight/ (height * height);
    
    printf("Your BMI is: %.2f\n", bmi);
    
   if (bmi < 15) 
   {
        printf("Category: Starvation\n");
    } else if (bmi >= 15 && bmi < 16) 
    {
        printf("Category: Anorexic\n");
    } else if (bmi >= 16 && bmi < 18.5) 
    {
        printf("Category: Underweight\n");
    } else if (bmi >= 18.5 && bmi < 25) 
    {
        printf("Category: Normal \n");
    } else if (bmi >= 25 && bmi < 30) 
    {
        printf("Category: Overweight\n");
    } else if (bmi >= 30 && bmi < 35) 
    {
        printf("Category: Obese Class I\n");
    } else if (bmi >= 35 && bmi < 40) 
    {
        printf("Category: Obese Class II\n");
    } else {
        printf("Category: Morbidly Obese\n");
    }

    return 0;

}
