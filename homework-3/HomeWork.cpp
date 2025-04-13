#include <iostream>
using namespace std;

int main()
{
	int target;
	cout << "write target to find element on massive:" << endl;
	cin >> target;
	cout << "write size of massives:";
	int size;
	cin >> size;
	if (size <= 0)
	{
		cout << "error" << endl;
		return 0;
	}
	cout << "vvod massiva: " << endl;

	int* massiveone = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cin >> massiveone[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (massiveone[i] == target)
		{
			cout << i << "index is target";
		}
	}
}