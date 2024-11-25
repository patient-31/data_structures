/*
 * ________________________________________________________________________________
 * |  File: object_arrays.cpp
 * |  Project: patient
 * |  File Created: Monday, 25th November 2024 06:17 pm
 * |  Author: Daniel Haddington [haddingtondaniel5@icloud.com]
 */
#include <iostream>
using namespace std;

class Student {
public:
	string Name;
	int Age;
	char Gender;
	float ProgrammingGrade;

	Student(){};
	
	Student(string name, int age, char gender, float programmingGrade) {
		Name = name;
		Age = age;
		Gender = gender;
		ProgrammingGrade = programmingGrade;
	}
};

int main()
{
	// Student students[3] = 
	// {
	// 	{"Saldina", 28, 'f', 9},
	// 	{"Daniel", 31, 'm', 7},
	// 	{"Gavin", 14, 'm', 10}
	// };


	Student students[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "STUDENT " << i + 1 << endl;

		Student s;
		cout << "Name: ";
		cin >> s.Name;
		cout << "Age: ";
		cin >> s.Age;
		cout << "Gender: ";
		cin >> s.Gender;
		cout << "Programming grade: ";
		cin >> s.ProgrammingGrade;

		students[i] = s;
	}
	return (0);
}