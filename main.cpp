// Name: Project 1
// This program calculates and displays business expenses.

#include <iostream>

int main()
{
std:: string location;
int days;
double hotel, meal, total;

//Information
std::cout << "Welcome to the Business Trip Tracker!" << '\n';

std::cout << "What is the business trip location? " << '\n';
std::cin >> location;

std::cout << "How many days will the trip take?" << '\n';
std::cin >> days;

std::cout << "What is the total hotel expense?" << '\n';
std::cin >> hotel;

std::cout << "What is the total meal expense?" << '\n';
std::cin >> meal;

//Calculate total
total = meal + hotel;

//output
std::cout << "location" << "\t" << "days" << "\t" << "hotel" << "\t" << "meal" << "\t" << "total \n";
std::cout << location << "\t\t" << days << "\t" << hotel << "\t" << meal << "\t" << total << std::endl;

return 0;
}
