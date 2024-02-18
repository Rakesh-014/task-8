#include<stdio.h>
int main(){
    int n1,n2,result;
    n1=2;
    n2=5;
    result=n1>n2?n1:n2;
    printf("%d\n",result);
    {
        int n1,n2,result;
        n1=10;
        n2=3;
        result=n1>n2?n1:n2;
        printf("%d\n",result);
    }
}