#include<stdio.h>
lucky(int a,int b){
    int result;
    result=a>b?a:b;
    printf("%d\n",result );
}
int main(){
    lucky(4,6);
    lucky(50,5);
    return 0;
}