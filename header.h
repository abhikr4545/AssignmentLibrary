#pragma once
#include<iostream>
#include<string>
using namespace std;

 string getName(string question)
{
	cout << question;
	string answer;
	cin >> answer;
	return answer;
}

 string getAName(string question)
 {
	 cout << question;
	 string answer;
	 cin >> answer;
	 return answer;
 }

 
 double getPrice(string question)
 {
	 double num;
	 cout << question;
	 cin >> num;
	 return num;
 }
