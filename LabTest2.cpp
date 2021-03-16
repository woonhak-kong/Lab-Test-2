#include <iostream>

using namespace std;

void DisplayAsterisk(int);

int main()
{
	const int NUM_OF_ARRAY = 5;
	int arrayOfNum[NUM_OF_ARRAY];

	cout << "You will need to enter 5 number\n";
	cout << "And it must be from 1 to 30\n\n";


	for (int i = 0; i < NUM_OF_ARRAY; i++)
	{
		cout << "Enter " << i + 1 << "st number please.\n";
		cout << " > ";
		cin >> arrayOfNum[i];

		while (arrayOfNum[i] < 1 || arrayOfNum[i] > 30)
		{
			cout << "YOU MUST ENTER NUMBER FROM 1 TO 30 !!!\n\n";
			cout << "Enter " << i + 1 << "st number please.\n";
			cout << " > ";
			cin >> arrayOfNum[i];
		}
	}
	system("cls");
	cout << "You entered ";
	for (int i = 0; i < NUM_OF_ARRAY; i++)
	{
		cout << arrayOfNum[i] << " ";
	}
	cout << "\n\n";

	for (int j = 0; j < NUM_OF_ARRAY; j++)
	{
		DisplayAsterisk(arrayOfNum[j]);
	}






	return 0;
}

void DisplayAsterisk(int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << "*";
	}
	cout << endl;
}
