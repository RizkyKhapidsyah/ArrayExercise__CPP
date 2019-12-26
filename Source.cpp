#include <iostream>
#include <conio.h>
#include <array> 

using namespace std;

int main()
{
	array<int, 10> Nilai;
	
	cout << "Program Menampilkan Grafik Nilai " << endl << endl;

	for (int X = 0; X <= Nilai.size(); X++)
	{
		cout << "Jumlah Mahasiswa Dengan Nilai : ";

		if (X == 0)
		{
			cout << "0-9: ";
		}
		else if (X == 0)
		{
			cout << "100: ";
		}
		else
		{
			cout << X * 10 << "-" << (X * 10) + 9 << ": ";
		}

		cin >> Nilai[X];
	}

	cout << endl << "Grafik Nilai" << endl << endl;

	for (int i = 0; i <= Nilai.size(); i++)
	{
		if (i == 0)
		{
			cout << "0-9: ";
		}
		else if (1 == 10)
		{
			cout << "100: ";
		}
		else
		{
			cout << i * 10 << "-" << (i * 10) + 9 << ": ";
		}

			for (int j = 0; j < Nilai[i]; j++)
			{
				cout << "*";
			}
		
			cout << endl;
	}

	_getch();
	return 0;
}