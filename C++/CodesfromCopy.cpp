//-29274224444017179284

#include <iostream>
using namespace std;


int p1();
int p2();
int p3();
int p4();
int p5();
int p6();
int p7();
int p8();


void choice()
{
	cout << "\nWhich Program You want to Run?";
	cout << "\n\nChoose From The Given Options (1 to 7)\n";

	cout << "1. Fibonaccil Numbers\n";												//Done
	cout << "2. Reverse The Number\n";												//Done
	cout << "3. Unknown Program\n";													//Done
	cout << "4. Sum Of Digits Of Inputted Number\n";										//Done
	cout << "5. Checking The Palindrome Number\n";
	cout << "6. Checking The Armstrong Number\n";
	cout << "7. Checking Prime Numbers\n";
	cout << "8. Printing Prime Numbers Upto Given Range\n";

	cout << "\nUse 0 for Exit\n";

	cout << "\nYour Option : ";


	int option;
    	
	cin >> option;

	if (option == 0)
	{
		cout << "\nClosing GIGA Program...\nHave A Good Day!";
		exit(0);
	}
	else if (option == 1)
		p1();
	else if (option == 2)
		p2();
	else if (option == 3)
		p3();
	else if (option == 4)
		p4();
	else if (option == 5)
		p5();
	else if (option == 6)
		p6();
	else if (option == 7)
		p7();
	else if (option == 8)
		p8();
	else
	{
		cout << "Wrong Input\nChoose Options Again From Below\n";
		choice();
	}

}
int main()
{
choice();
cout << "\n\nWelcome to the GIGA program";
}







int p1()
{
//fibonacil
	int x,i,previous = 0, current = 1, next;
	cout<<"How many Elements You Want\t";
	cin>>x;
	cout<<previous<<" "<<current;
	next = previous + current;

	for (i = 3; i <= x; i++)
	{
		cout<<" "<<next;
		previous = current;
		current = next;
		next = previous + current;
	}
}

int p2()
{
//reversed
	int num,mod;
	cout<<"Input Any Number\t";
	cin>>num;
	cout << "\nYour Reversed Number : ";
	while (num)
	{
		mod = num % 10;
		cout<<mod;
		num /= 10;
	}
}


int p3()
{
//unknown
	int n,m,r = 0;
	cout << "Input Any Number\t";
	cin>>n;
	while (n)
	{
		m = n % 10;
		r = (r * 10) + m;
		n /= 10;
	}
	cout <<"Reversed Number = " << r;
}

int p4()
{
//sum of digits
	int n,m,s = 0,ncopy;
	cout << "Input A Number\t";
	cin>>n;
	ncopy = n;
	while (n)
	{
		m = n % 10;
		s += m;
		n /= 10;
	}
	cout <<"Sum of Digits of "<< ncopy << " = " << s;
}
	
int p5()
{
//palindrome
	int n,m,r = 0,x;
	cout << "Input Any Number\t";
	cin>>n;
	x = n;
	while (n)
	{
		m = n % 10;
		r = (r * 10) + m;
		n /= 10;
	}
	cout <<"Palindrome Numbers upto " <<x<<" are :- " << r;
}

int p6()
{
//armstrong
	int n,m,r = 0,x,a;
	cout << "Input Any Number\t";
	cin>>n;
	x = n;
	while (n)
	{
		m = n % 10;
		r = a + (m * m * m);
		n /= 10;
	}
	cout <<"Armstrong Numbers upto " <<x<<" are :- " << r;
	return 0;
}

int p7()
{
//prime
	return 0;
}

int p8()
{
    return 0;
}

/*
Hello guys this is my brand new laptop
*/