//Q14 - Simple Interest
import java.util.*;
public class Q14 
{
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main()
    {
        Scanner sc = new Scanner(System.in);
        int p,r,t,si;
        System.out.println("Simple Interest Calculator\n");
        System.out.println("Enter Principle, Rate and Time");
        p = sc.nextInt();
        r = sc.nextInt();
        t = sc.nextInt();
        si = p*r*t / 100;
        System.out.println("SI = " + si);
        sc.close();
    }
}