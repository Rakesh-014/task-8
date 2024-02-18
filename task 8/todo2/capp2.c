#include <stdio.h>
 doarea(int r)
 {
  static float pi=3.14;
 float result;
 result=pi*(r*r);
printf("%f\n",result);
 }
 int main(){
    doarea(16);
    doarea(9);
    return 0;
 }
 
 