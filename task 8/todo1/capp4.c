#include <stdio.h>
int main() {

const float pi=3.14;
float r,result;
r=3;
result=pi*(r*r);
printf("%f\n",result);
    {
        const float pi=3.14;
float r,result;
r=6;
result=pi*(r*r);
printf("%f\n",result);
}
{
            const float pi=3.14;
float r,result;
r=20;
result=pi*(r*r);
printf("%f\n",result);
    return 0;
}
}