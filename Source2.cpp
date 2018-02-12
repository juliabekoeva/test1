#include<iostream>
using namespace std;
void main()
{
	int x = 0;
	int sum = 1;
	cout << "vvedite chislo" << "\n";
	cin >> x;

	while (x <= 500)
	{
		sum *= x;
		x++;
	}
	cout << "sum=" << x;
	system("pause");
}