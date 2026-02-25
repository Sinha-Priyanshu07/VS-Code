//Q13 - input 2 no.s and ADD THEM
import java.util.Scanner;
public class Q13
{
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main(String args[])    
    {
        int a,b;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Two Numbers");
        System.out.print("1st Number : ");
        a = sc.nextInt();
        System.out.print("2nd Number : ");
        b = sc.nextInt();
        System.out.println("Sum of Two Numbers = " + (a+b));
        sc.close();
    }
}
