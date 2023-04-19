#include<iostream>
using namespace std;
int main()
{
    int n;//number till which the series is printed
    cout<<"Enter a number:";
    cin>>n;
    int p0=1;//first term of the series
    int p1=1;//second term of the series
    int p2=1;//third term of the series
    int pn=p0+p1;//n'th term of the series
    cout<<endl<<"Padovan Sequence is...."<<endl;
    cout<<"\t"<<p0<<"\t"<<p1<<"\t"<<p2;
    while(pn<=n)
    {
        cout<<"\t"<<pn;
        p0=p1;
        p1=p2;
        p2=pn;
        pn=p0+p1;
    }
}

