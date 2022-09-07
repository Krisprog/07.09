#include<iostream>
using namespace std;
class Person
{
	string name;
	int age;
public:
	Person()
	{}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
};
class Point
{
	int x, y;
public:
	Point()
	{}
};

int main()
{
	Point a;
	Person b;

}