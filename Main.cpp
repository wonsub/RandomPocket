#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	bool Pocket[52] = {false};
	int PickCount = 52;
	int Select = 0;

	while(PickCount !=0)
	{
		//_getch();
		Select = rand() % 52;
		
		if (Pocket[Select] == false)
		{
			Pocket[Select] = true;
			cout << Select+1 << "����" << endl;
			PickCount--;
		}
	}

	return 0;
}