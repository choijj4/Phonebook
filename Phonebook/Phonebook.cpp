// Phonebook.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <iostream>  
#include <cstring>



using namespace std;

char pb[10][2][50];
void addEntry(char arr[10][2][50]);
void display(char arr[10][2][50]);
void check(char arr[10][2][50]);
int i = 0;
int main() {
	char opt;
	do {
		cout << "Phonebook\n Info 450\n\n" << endl;
		cout << "Menu\n" << endl;
		cout << " [A]dd new entry   --Enter A   " << endl;
		cout << " [D]isplay         --Enter D  " << endl;
		cout << " [Q]uit            --Enter Q   " << endl;
		cin >> opt;
		if (opt == 'a' || opt == 'A')
		{
			if (i < 10) {

				addEntry(pb);
				check(pb);
			}
			else {
				cout << "Phone book is Full!" << endl;
			}
		}
		else if (opt == 'd' || opt == 'D')
		{
			display(pb);
		}
		else if (opt == 'q' || opt == 'Q')
			break;
	} while (1 == 1);

	return 0;


}

void addEntry(char arr[10][2][50])
{
	cin.clear();
	cin.ignore();
	cout << "Please Enter First and Last Name?" << endl;
	cin.getline(arr[i][0], 50);

	cout << "Please Enter the Number?" << endl;
	cin.getline(arr[i][1], 50);
	i++;
}

void check(char arr[10][2][50])
{
	for (int c = -1; c < i - 1; c++) {
		if ((strcmp(arr[c][0], arr[i - 1][0]) == 0) && (i - 1 != 0))
		{
			cout << "you already did that - press enter" << endl;
			i--;
			addEntry(arr);
			break;
		}
	}
}

void display(char arr[10][2][50])
{

	for (int a = 0; a < i; a++)
	{
		cout << "Entry: " << a + 1 << " Name: " << arr[a][0] << " Number: " << arr[a][1] << endl;
	}
}



