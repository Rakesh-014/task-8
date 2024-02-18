#include<stdio.h>
square(int a,int b){
int result;
result=(a*a)+(b*b)+(2*(a*b));
printf("%d\n",result);
}
int main(){
  square(3,2);
  square(5,6);
}