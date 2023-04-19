#include<stdio.h>
void main()
{
    int limit;//number of terms
    printf("\n Enter the number of terms:");
    scanf("%d",&limit);
    int p0=1;//first term of the series
    int p1=1;//second term of the series
    int p2=1;//third term of the series
    int pn=p0+p1;//current term of the series
    int ctr=3;//count of digits printed
    printf("\n%d\t%d\t%d",p0,p1,p2);
    while(ctr<limit)
    {
        printf("\t%d",pn);
        ctr++;
        p0=p1;
        p1=p2;
        p2=pn;
        pn=p0+p1;
    }
}
