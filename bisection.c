#include <stdio.h>
#include <math.h>
#define e 0.0001
#define f(x) x*x*x-4*x-9
int main(){
    float a,b,fa,fb,mid,fm;
    int i=0;
    printf("enter a and b");
    scanf("%f %f",&a,&b);
    do{
        fa=f(a);
        fb=f(b);
        mid=(a+b)/2;
        fm=f(mid);
        if(fa*fm<0){
            b=mid;
        }
        else{
            a=mid;
        }
        i++;
      printf("number of iterations %d\n",i);
      printf("roots %f",mid);  
    }
    while(fabs(fm)>e);
}