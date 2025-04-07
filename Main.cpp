#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	bool Pocket[52] = {false};
	int PickCount = 52;

	int Select = 0;

	for (int i = 0; i < 52; i++)
	{
		Pocket[i] = false;

	}


	while(PickCount !=0)
	{
		//_getch();
		Select = rand() % 52;
		
		if (Pocket[Select] == false)
		{
			Pocket[Select] = true;
			cout << Select+1 << "¹ø°ø" << endl;
			PickCount--;
		}

	}
	
	return 0;
}