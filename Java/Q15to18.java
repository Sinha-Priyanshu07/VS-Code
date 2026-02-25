//Q15 to 18

//Q15 - Calculate the Area of Circle
//Q16 - Calculate the Area of Square
//Q17 - Calculate the Area of Triangle
//Q18 - Calculate the Area of Rectangle
import java.util.Scanner;
public class Q15to18 
{
    private static final Scanner sc = new Scanner(System.in);
    //Q15
    @SuppressWarnings("ConvertToTryWithResources")
    static void circle() 
    {
        System.out.println("Area of Circle Calculator\n");
        System.out.println("Enter the Radius Of Circle");
        int r = sc.nextInt();
        float ar;
        final float PI = 3.14f; 
        ar = PI * r * r;
        System.out.println("Area of Circle of Given Radius = "+ ar);
    }
    

    //Q16
    @SuppressWarnings("ConvertToTryWithResources")
    static void square()
    {
        System.out.println("Area of Square Calculator\n");
        System.out.print("Enter the Length of Side : ");
        float s = sc.nextFloat();
        float ar;
        ar = s * s;
        System.out.println("Area of Square = "+ ar);
    }

    static void triangle()
    {
        System.out.println("Area of Triangle Calculator\n");
        System.out.print("Enter the length of Base : ");
        int b = sc.nextInt();
        System.out.print("Enter the length of Height : ");
        int h = sc.nextInt();
        float at;
        at = (float)0.5 * b * h ;
        System.out.println("Area of Triangle : " +at);
    }

    static void rectangle()
    {
        System.out.println("Area of Rectangle Calculator\n");
        System.out.print("Enter the length of Length : ");
        int l = sc.nextInt();
        System.out.print("Enter the length of Breadth : ");
        int b = sc.nextInt();
        int arec = l*b;
        System.out.println("Area of Rectangle : "+ arec);
    }
    @SuppressWarnings("ConvertToTryWithResources")
    public static void main()
    {
        circle();
        System.out.println("\n");
        
        square();
        System.out.println("\n");

        triangle();
        System.out.println("\n");

        rectangle();
        sc.close();
    }
}
//