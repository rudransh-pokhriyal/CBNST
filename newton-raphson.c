#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*x*x-3*x-5;
}

double df(double x)
{
    return 3*x*x-3;
}

double newton(double a,double b,double err)
{
     int itr,maxitr;
     double h,x0,x1;
     if(fabs(f(a))<fabs(f(b)))
     {
        x0=a;
     }
     else
     {
        x0=b;
     }
     printf("Iteration\tvalue\n");
     for(itr=1;itr<=10;itr++)
     {
        h=f(x0)/df(x0);
        x1=x0-h;
        printf("%d\t\t%lf\n",itr,x1);
        if(fabs(h)<err)
        {
            return x1;
        }
        x0=x1;
     }
     printf("Solution does not converge or iteration are not enough\n");
     return 0;  
}

int main()
{
     int maxitr;
     double a,b,err,root;
     printf("Enter initial values and error limit\n");
     scanf("%lf %lf %lf",&a,&b,&err);
     root=newton(a,b,err);
     if(root!=0)
     {
        printf("Final Value is %lf",root);
     }
     return 0;
}