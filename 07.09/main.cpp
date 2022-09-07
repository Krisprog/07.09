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
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
};

class Student
{
	string name;
	int age;
public:
};
class University
{
	Student* Academy;
	int count;
public:
};

int main()
{
	Point a;
	Person b;

	int arr[10]{ 1,2,3,4,5,6,7,8,9,10 };

	University Academy;

}