import java.util.*;

class Number 
{
    public boolean ChkPerfect(int iNo)
    {
        int iSum = 0;
        int i = 0;

        for(i = 1; i <= (iNo / 2); i++)
        {
            if(iNo % i == 0)
            {
                iSum = iSum + i;
            }
            
        }

        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}   // End of Number class

class Program80
{
    public static void main(String A[])
    {
        int iValue= 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        bRet = nobj.ChkPerfect(iValue);

        if(bRet == true)
        {
            System.out.println(iValue+ " is parfect number");
        }
        else
        {
            System.out.println(iValue+ " is not a perfect number");
        }

        // Important

        sobj = null;
        nobj = null;

        System.gc();
    }
}   