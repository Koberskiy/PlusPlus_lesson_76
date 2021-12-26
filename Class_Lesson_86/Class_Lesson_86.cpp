// 
// Default lesson: Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

using namespace std;
const int arSize = 8;

//==================================
// prototype
int sum_arr(int arr[], int n);

//==================================
// main
int main()
{
	int cookies[arSize] = {1,2,4,8,16,32,64,128};
	int sum = sum_arr(cookies, arSize);

	cout << "Total cookies eaten: " << sum << endl;

	return 0;
}

//==================================
// Opredilenie func
int sum_arr(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
	{
		total = total + arr[i];
	}
	return total;
}