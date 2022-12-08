#include "House.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str_w[3] = { "block","balk","brick" };
	string material= str_w[rand() % 3];

	double sum_all = 0;
	int time_all = 0;

	H_class* home[7] = { new Wall(4,material), new Wall(4,material),
	new Wall(8,material), new Wall(8,material), new window(9000,4),
		new door(7000,3),new roof(4,8) };

	cout << "---------------------------------------------------------------------" << endl;
	for (int i = 0; i < 7; i++)
	{
		home[i]->Print();
		home[i]->Area();
		sum_all += home[i]->Sum();
		time_all += home[i]->Time();		
	}
	cout << "---------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t     »того:  " << sum_all<<" руб.      "<<time_all<<" ч."<<endl;
	
}