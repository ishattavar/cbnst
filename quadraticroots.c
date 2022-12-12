#include <stdio.h>
#include <math.h>
int main(){
double a,b,c,x1,x2,rp,img;//a,b,c cofficent hain x1,x2 roots or rp real part hai complex roots ka or img imaginary part
printf("enter a,b,c for the quadratic equation ax^2+b^x+c");
scanf("%lf %lf %lf",&a,&b,&c);
double D=b*b-(4*a*c);
if(D>0){
    x1=(-b+sqrt(D))/(2*a);
     x2=(-b-sqrt(D))/(2*a);


    printf("x1 = %.2lf and x2 = %.2lf", x1, x2);
}
 else if (D == 0) {
 x1 = x2 = -b / (2 * a);
 printf("x1 = x2 = %.2lf;", x1);
 }
 else {
 rp = -b / (2 * a);//real part of complex root
 img = sqrt(-D) / (2 * a);//imaginary part of complex root 
 //x1=rp+(img)i;x2=rp-(img)i
 printf("x1 = %lf+%lfi and x2 = %lf-%lfi", rp, img, rp, img);
 }
 return 0;
}

