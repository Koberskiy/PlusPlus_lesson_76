// 
// Default lesson: Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;

//==================================
// prototype
void n_chars(char, int);


//==================================
// main
int main()
{
	int times1 =0;
	char ch;

	cout << "enter a character: ";
	cin >> ch;

	while (ch != 'q')
	{
		cout << "Enter en integer: ";
		cin >> times1;
		n_chars(ch, times1);
		cout << "\nEnter other character or press the "" q-key to quit: ";
		cin >> ch;
	}

	cout << "The value of times is " << times1 << ".\n";
	cout << "Bye\n";
	return 0;
}

//==================================
// Opredilenie func
void n_chars(char c, int n)
{
	while (n-- > 0)
		cout << c;
}