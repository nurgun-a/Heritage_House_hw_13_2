#include "House.h"

double H_class::Sum()
{
	double sum = 0;
	
	return sum;
}

int H_class::Time()
{
	int time = 0;

	return time;
}

void H_class::Area()
{
	int area = 0;
}
//***************************************************************************

Wall::Wall()
{
	material = "";
	price = 0;
	height = 0;
	width = 0;
}

Wall::Wall( int _width, string _material)
{
	height = 3;
	width = _width;
	material = _material;
	if (material == "block")price = 2900;
	else if (material == "balk")price = 3700;
	else if (material == "brick")price = 4600;
}

int Wall::Get_width()
{
	return width;
}

void Wall::Print()
{
	cout << setw(8) << name << " |" 
		<< setw(8) << material << " |" << setw(6) << price << " руб. |";
}

double Wall::Sum()
{
	double sum = price * (height * width);
	cout << setw(6) << sum << " руб. |";
	return sum;
}

int Wall::Time()
{
	int time = (height * width)/5;
	cout << setw(6) << time << " ч. |"<<endl;
	return time;
}

void Wall::Area()
{
	int area = height * width;	
	cout << setw(6) << area << " " << measurement << " |";
}
//***************************************************************************

window::window()
{
	price = 0;
	kol = 0;
}

window::window(double _price, int _kol)
{
	price = _price;
	kol = _kol;
}

void window::Print()
{
	cout << setw(8) << name << " |" 
		<< setw(8) << material << " |" << setw(6) << price << " руб. |";
}

double window::Sum()
{
	double sum = price * kol;
	cout << setw(6) << sum << " руб. |";
	return sum;
}

int window::Time()
{
	int time = kol * 2;
	cout << setw(6) << time << " ч. |" << endl;
	return time;
}
void window::Area()
{
	cout << setw(6) << kol << " " << measurement << " |";
}
//***************************************************************************

door::door()
{
	price = 0;
	kol = 0;
}

door::door(double _price, int _kol)
{
	price = _price;
	kol = _kol;
}

void door::Print()
{
	cout << setw(8) << name << " |" 
		<< setw(8) << material << " |" << setw(6) << price << " руб. |";
}

double door::Sum()
{
	double sum = price * kol;
	cout << setw(6) << sum << " руб. |";
	return sum;
}

int door::Time()
{
	int time = kol * 3;
	cout << setw(6) << time << " ч. |"<<endl;
	return time;
}
void door::Area()
{
	cout << setw(6) << kol << " " << measurement << " |";
}
//***************************************************************************

roof::roof()
{
	price = 0;
	height_1 = 0;
	height_2 = 0;
}

roof::roof(int _height_1, int _height_2)
{
	height_1 = _height_1;
	height_2 = _height_2;
}

void roof::Print()
{
	cout << setw(8) << name << " |" << setw(8) << material 
		<< " |" << setw(6) << price << " руб. |";
}

double roof::Sum()
{
	double sum = price * (height_1*height_2);
	cout << setw(6) << sum << " руб. |";
	return sum;
}

int roof::Time()
{
	int time = (height_1 * height_2) + 10;
	cout << setw(6) << time << " ч. |"<<endl;
	return time;
}

void roof::Area()
{
	int area = height_1 * height_2;
	cout << setw(6) << area << " " << measurement << " |";
}
