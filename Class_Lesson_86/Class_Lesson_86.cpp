// 
// Default lesson: Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

// prototype
void simple(); 
void cherrs(int);
double cube(double);

// main
int main()
{
	cout << "Main will call simple func" << endl;
	simple();
	cout << "Main finished - func" << endl;
	
	cout << "Give me a number" << endl;
	cherrs(5);
	
	double side;
	cin >> side;
	double volume = cube(side);
	
	cout << "side = " << side << endl;
	cout << "volume = " << volume << endl;

	cout << "A" << side << " -foot cube have a volume";
	cout << volume << " cube feet.\n";

	cherrs(cube(2));
	return 0;
}

//==================================
// Opredilenie func
void simple()
{
	cout << "I am simple function" << endl;
}

void cherrs(int n)
{
	for (int i= 0; i < n; i++)
	{
		cout << "CHeers!";
	}
	cout << endl;
}

double cube(double x)
{
	return x * x * x;
}