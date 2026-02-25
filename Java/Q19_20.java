//Using Methods of Math Class 

//Q19  Use of Sqrt
//Q20 Use of Pow
import java.util.Scanner;
public class Q19_20{
    public static Scanner sc = new Scanner(System.in);
        void Q19()
        {
            System.out.println("Calculation of SQUARE ROOT");
            System.out.print("Enter A Number : ");
            double a = sc.nextDouble(), asqrt = Math.sqrt(a);
            System.out.println("Square Root of "+ a + " = "+ asqrt+ "\n");
        }

        void Q20()
        {
            System.out.println("Calculation of Power");
            System.out.print("Enter A Number(Base) : ");
            double b = sc.nextDouble();
            System.out.print("Enter the Exponent Value : ");
            double e = sc.nextDouble(), b2e = Math.pow(b,e);
            System.out.println(b + " To the Power of " + e +" = "+ b2e +"\n");
        }
    public static void main(String[] args)
    {
        Q19_20 q = new Q19_20();
        q.Q19();
        q.Q20();
        sc.close();
    }
}