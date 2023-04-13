#include<stdio.h>
int main()
{
    double M,A,B,MEDIA;
    scanf("%lf %lf",&A,&B);
    M=(A*3.5)+(B*7.5);
    MEDIA=M/(3.5+7.5);
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
