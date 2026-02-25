#include<iostream>
#include <string.h>
using namespace std;
int main(){
    char a[100],b[100];
    int x= 0;
    cout<<"ENTER THE WORD : ";
    cin>>a;
    strcpy(b,a);
    strrev(b);
    cout<<"\nYOUR INPUTTED STRING : "<<a;
   int n = strlen(a);
    
    for (int i = 0;i<n;i++)
    {
        if (a[i] == b[i])
            x++;
    }

    if (x==n)
        cout << "\nInputted STRING is a PALINDROME";
    else
        cout << "\nInputted STRING is NOT a PALINDROME";
}

/*
How It Works?

=>  Took two strings
=>  took input in 1st string
=>  Copied to 2nd string
=>  Reversed the 2nd string
=>  took an integer for getting the value of string size(any) through strlen
=>  Created a loop that runs to check each value and counted in another integer
=>  if-else condition to check(=) values of 1st integer to 2nd
=>if true then yes or if false then no
*/