import java.util.*;
class PadovanSequencefornoofterms
{
    Scanner ob=new Scanner(System.in);
    void main()
    {
        int limit;//number of terms
        System.out.println("\n Enter the number of terms:");
        limit=ob.nextInt();
        int p0=1;//first term of the series
        int p1=1;//second term of series
        int p2=1;//third term of series
        int pn=p0+p1;//current term of the series
        int ctr=3;//count of digits printed
        System.out.print(p0+"\t"+p1+"\t"+p2+"\t");
        while(ctr<limit)
        {
            System.out.print(pn+"\t");
            ctr++;
            p0=p1;
            p1=p2;
            p2=pn;
            pn=p0+p1; 
        } 
    }
}