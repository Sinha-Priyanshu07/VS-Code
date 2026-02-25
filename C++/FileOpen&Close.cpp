#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream myFile("output.txt");
	if (myFile.is_open())
	{
		myFile << "Hello Everyone!\n";
		myFile << "This is a testing file for My Program\n";
		myFile.close();
	}
	
	else
	{
		cout << "ERROR Opening File!\n";
		return 1;
	}
	return 0;
}


/*




*/