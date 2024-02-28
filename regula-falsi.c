#include<stdio.h>
#include<math.h>
#define   f(x)   x*x*x-2*x-5
int main()
{
	 float a, b, c, f0, f1, f2, e;
	 int loop = 1;
	 up:
	 printf("\nEnter guesses:\n");
	 scanf("%f%f", &a, &b);
	 printf("Enter error limit:\n");
	 scanf("%f", &e);
	 f0 = f(a);
	 f1 = f(b);
	 if( f0*f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }
	 printf("\nIteration\t\ta\t\tb\t\tc\t\tf(c)\n");
	 do
	 {
		  c = a - (a-b) * f0/(f0-f1);
		  f2 = f(c);
		  printf("%d\t\t%f\t%f\t%f\t%f\n",loop, a, b, c, f2);
		  if(f0*f2 < 0)
		  {
			   b = c;
			   f1 = f2;
		  }
		  else
		  {
			   a = c;
			   f0 = f2;
		  }
		  loop+=1;
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", c);
	 return 0;
}