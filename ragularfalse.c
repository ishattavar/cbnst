
#include<stdio.h>
#include <math.h>
#define f(x) x*x*x-4*x-9
#define e 0.0001
int main(){
    int i=0;
    float a,b,c,fa,fb,fc;
    printf("Enter the value of a and b");
    scanf("%f%f",&a,&b);
do{
    
    fa=f(a);
    fb=f(b);
    c=a-(a-b)*fa/(fa-fb);
    fc=f(c);
     if(fa*fc<0){
            b=c;
        }
        else{
            a=c;
        }
        i++;
      printf("number of iterations %d\n",i);
      printf("roots %f",c);  
    }
    while(fabs(fc)>e);
}
    

