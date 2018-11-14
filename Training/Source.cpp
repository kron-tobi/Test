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
		this->name = name;
		this->arms = arms;
		this->legs = legs;
		this->head = head;

	}
	~People()
	{
		cout << "\nDestruktor\n";
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

void Op(People x)
{
	
}

int main()
{
	People x("Mark", 2, 2, 1);
	Monkey y("Molly", 4, 1, 1);
	//x = y;
	x.Print();
	y.Print();
	system("pause");
	return 0;
}