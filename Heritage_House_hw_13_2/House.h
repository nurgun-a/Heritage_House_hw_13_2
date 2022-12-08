#include <iostream>
#include <Windows.h>
#include <iomanip>
#include <conio.h>
#include <string.h>

using namespace std;

class H_class
{
public:
	virtual void Print(){}
	//virtual void Build(){}
	virtual double Sum();
	virtual int Time();
	virtual void Area();	
};

class Wall : public H_class
{
	string name = "Стена";
	string measurement = "м2.";
	string material;
	double price;
	int height, width;
public:
	Wall();
	Wall( int _width, string _material);
	int Get_width();

	virtual void Print();
	virtual double Sum();
	virtual int Time();
	virtual void Area();
};

class window : public H_class
{
protected:
	string name = "Окно";
	string measurement = "шт.";
	string material = "plastic";
	double price;
	int kol;

public:
	window();
	window(double _price, int _kol);

	virtual void Print();
	virtual double Sum();
	virtual int Time();
	virtual void Area();
};

class door : public H_class
{
protected:
	string name = "Дверь";
	string measurement = "шт.";
	string material = "wood";
	double price;
	int kol;

public:
	door();
	door(double _price, int _kol);

	virtual void Print();
	virtual double Sum();
	virtual int Time();
	virtual void Area();
};

class roof : public H_class
{
	string name = "Крыша";
	string measurement = "м2.";
	string material="wood";
	double price=2700;
	int height_1, height_2;
public:
	roof();
	roof(int _height_1, int _height_2);
	
	virtual void Print();
	virtual double Sum();
	virtual int Time();
	virtual void Area();
};