// Lab 7.2
//Jenna Lambert
#include "pch.h"
#include <iostream>
using namespace std;
//prototype
void admission(double, int);
int main() {
	//define variables
	double gpa;
	int score;

	//prompt for GPA
	cout << "Please enter a GPA between 0.0 and 4.0: ";
	cin >> gpa;

	//checking GPA
	while (gpa < 0.0 || gpa > 4.0) {
		cout << "GPA must be be between 0.0 and 4.0. Please re-enter GPA: ";
		cin >> gpa;
	}
	
	//prompt for score
	cout << "Please enter a score between 0 and 100: ";
	cin >> score;

	//checking score
	while (score < 0 || score > 100) {
		cout << "Score must be be between 0 and 100. Please re-enter score: ";
		cin >> score;
	}

	//call and pass
	admission(gpa, score);
}
void admission(double gpa, int score) {
	if (gpa >= 3.6 && score >= 60) {
		cout << "Accepted";
	}
	else if (gpa >= 3.0 && score >= 70) {
		cout << "Accepted";
	}
	else if (gpa >= 2.6 && score >= 80) {
		cout << "Accepted";
	}
	else if (gpa >= 2.0 && score >= 90) {
		cout << "Accepted";
	}
	else {
		cout << "Rejected";
	}
}