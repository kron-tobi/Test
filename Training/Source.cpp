#include <iostream>
#include <string>
using namespace std;

class People
{
private:
	string name;
	int arms;
	int legs;
	int head;
	
public:
	People()
	{
		name = "null";
		arms = 0;
		legs = 0;
		head = 0;
	}
	People(string name, int arms, int legs, int head)
	{
		cout << "Constructor #" << this << endl;
		this->name = name;
		this->arms = arms;
		this->legs = legs;
		this->head = head;
	}
	People(const People &other)
	{
		cout << "Constructor copir #" << this << endl;
		this->name = other.name;
		this->arms = other.arms;
		this->legs = other.legs;
		this->head = other.head;
	}
	~People()
	{
		cout << "\nDestruktor #" << this << endl;
	}
	void Print()
	{
		cout << "Name = " << name << "\narms = " << arms << "\nlegs = " << legs << "\nhead = " << head << endl;
	}
};

class Monkey
{
private:
	string name;
	int paws;
	int tails;
	int head;
public:
	Monkey()
	{
		paws = 0;
		tails = 0;
		head = 0;
	}
	Monkey(string name, int paws, int tails, int head)
	{		
		this->name = name;
		this->paws = paws;
		this->tails = tails;
		this->head = head;
	}
	void Print()
	{
		cout << "Name = " << name << "\npaws = " << paws << "\ntails = " << tails << "\nhead = " << head << endl;
	}
};

/*void Op(People x)
{
	cout << "Op" << endl;
}*/

int main()
{
	People x("Mark", 2, 2, 1);
	Monkey y("Molly", 4, 1, 1);
	//x = y;
	People z(x);
	z.Print();
	x.Print();
	y.Print();	
	//Op(x);
	
	return 0;
}