import java.util.*;

class Number 
{
    public boolean ChkPerfect(int iNo)
    {
        int i = 0;

        for(i = 1; i <= (iNo / 2); i++)
        {
            if(iNo % i == 0)
            {
                System.out.println(i);
            }
        }
        return true;
    }
}   // End of Number class

class Program79
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