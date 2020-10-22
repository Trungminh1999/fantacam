#include <iostream> 
using namespace std;


int PhepCong(int a, int b)
{
	return a+b;
}

int PhepTru(int a, int b)
{
	return a-b;
}

int PhepNhan(int a, int b)
{
	return a*b;
}

int PhepChia(int a, int b)
{
	return a/b;
}


int main() {
	int a, b;
	cout << "Nhập a: ";
	cin >> a;
	cout << "Nhập b: ";
	cin >> b;

	int chon;
	cout << "1.Tính a + b " << endl;
	cout << "2.Tính a - b " << endl;
	cout << "3.Tính a * b " << endl;
	cout << "4.Tính a / b " << endl;
	cin >> chon;

	switch (chon)
	{
	case 1:
		cout << PhepCong(a, b);
		break;
	case 2:
		cout << PhepTru(a, b);
		break;
	case 3:
		cout << PhepNhan(a, b);
		break;
	case 4:
		cout << PhepChia(a, b);
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}