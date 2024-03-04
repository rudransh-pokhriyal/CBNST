#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    float d,x1,x2;
    
    printf("Enter the values of the coefficients \n");
    scanf("%f %f %f", &a, &b, &c);
    d=b*b-4*a*c;

    printf("For eq %.2fx^2+%.2fx+%.2f \n", a, b, c);
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots %.2f and %.2f are real and distinct \n", x1, x2);
  }
    else if(d==0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("The roots %.2f and %.2f are real and equal \n", x1,x2);
    }
    else
    {
        float real1=-b/2*a;
        float img1=sqrt(d*-1)/2*a;
        printf("Imaginary roots are %.2f+%.2fi and %.2f-%.2fi \n", real1, img1, real1, img1);
    }
    
    return 0;
}
