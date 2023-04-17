import java.util.*;
class PadovanSequencetillanumber
{
    Scanner ob=new Scanner(System.in);
    void main()
    {
        int n;//number till which the series is printed
        System.out.println("Enter a number:");
        n=ob.nextInt();
        int p0=1;//first term of series
        int p1=1;//second term of series
        int p2=1;//third term of series
        int pn=p1+p0;//current or n'th term of series
        System.out.print(p0+"\t"+p1+"\t"+p2+"\t");
        while(pn<=n)
        {
            System.out.print(pn+"\t");
            p0=p1;
            p1=p2;
            p2=pn;
            pn=p0+p1;
            
        }
        
    }
}
