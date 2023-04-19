#include<iostream>
using namespace std;
int main()
{
    int limit;//number of terms
    cout<<"Enter the number of terms:";
    cin>>limit;
    int ctr=3;//count of digits printed
    int p0=1;//first term of the series
    int p1=1;//second term of the series
    int p2=1;//third term of the series
    int pn=p0+p1;//current term of the series
    cout<<endl<<"The Padovan Sequence is ...."<<endl;
    cout<<"\t"<<p0<<"\t"<<p1<<"\t"<<p2;
    while(ctr<limit)
    {
        cout<<"\t"<<pn;
        p0=p1;
        p1=p2;
        p2=pn;
        pn=p0+p1;
        ctr++;
        
    }
    
    return 0;
    
}

