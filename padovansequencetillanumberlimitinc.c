#include<stdio.h>
void main()
{
    int n;//number till which the series is printed
    printf("\n Enter a number:");
    scanf("%d",&n);
    int p0=1;//first term of the series
    int p1=1;//second term of the series
    int p2=1;//third term of the series
    int pn=p0+p1;//n'th term of the series
    printf("\n%d\t%d\t%d",p0,p1,p2);
    while(pn<=n)
    {
        printf("\t%d",pn);
        p0=p1;
        p1=p2;
        p2=pn;
        pn=p0+p1;
    }
}