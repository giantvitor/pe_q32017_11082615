#include <stdio.h>

#include <math.h>



double delta(double a, double b, double c)

{
  
  
	return (pow(b,2)) - (4*a*c);

}



double bhaskara_2(double a, double b, double c)

{
  
	if (delta(a,b,c) < 0) return (sqrt((-1)*delta(a,b,c))) / (2*a);

	return ((-1*b) - sqrt(delta(a,b,c))) / (2*a);

}



double bhaskara_1(double a, double b, double c)

{
 
	if (delta(a,b,c) < 0) 
	return (sqrt((-1)*delta(a,b,c))) / (2*a);
  
	return ((-1*b) + sqrt(delta(a,b,c))) / (2*a);

}



int main() 
{
  
    

	double a; double b; double c; double d;
    
    
	scanf("%lf %lf %lf", &a, &b, &c);
    
   
 
	if (delta(a,b,c) < 0) printf("%.2lf - %.2lf i %.2lf + %.2lf i\n", (-1*b)/(2*a), bhaskara_1(a,b,c), (-1*b)/(2*a), bhaskara_2(a,b,c));
    
	else printf("%.2lf %.2lf\n", bhaskara_2(a,b,c), bhaskara_1(a,b,c));
    
    

	return 0;
}
