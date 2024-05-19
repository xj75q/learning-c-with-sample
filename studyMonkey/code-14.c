//
#include<stdio.h>
#include<math.h>

int main(){
    double a,b,c,s,area;
    scanf("%lf,%lf,%lf",&a,&b,&c);
    s = (a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("a=%f\t,b=%f\t,c=%f\n",a,b,c);
    printf("area=%f\n",area);
    return 0;
}
 