#include<stdio.h>
#include<math.h>

int demo1(){
    double r,n,p;
    r = -0.1;
    n = 10;
    p = pow(1+r,n);
    printf("p =%f\n",p);
    return 0;
}

int demo2(){
    double a,b,c;
    a = 3.67;
    b = 5.43;
    c = 6.21;
    printf("设定的a是%5.2f,b是%-5.2f,c是%7.4f\n",a,b,c);
    return 0;
}

int demo3(){
    printf("身高是%e厘米\n",123.456);
    return 0;
}

int demo4(){
    double a;
    int ge,shi,bai;
    scanf("%lf",&a);
    bai = (int)(a/100);
    shi = (int)(a-bai*100)/10;
    ge = (int)(a-bai*100-shi*10);
    printf("个位数字%d\n",ge);
    printf("十位数字%d\n",shi);
    printf("百位数字%d\n",bai);
    return 0;

}


int demo5(){
    
}




int main(){
   //demo1();
  // demo2();
  //demo3();
  demo4();
}