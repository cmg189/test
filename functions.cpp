#include <iostream>
#include "functions.h"
#include "members.h"
#include "books.h"
#include "loans.h"
using namespace std;

char print_menu(){
	char choice;
	cout << "Library Loan Management System" << endl;
	cout << "A - Add New Member" << endl;
	cout << "E - Edit Member Profile" << endl;
	cout << "D - Delete Member Profile" << endl;
	cout << "O - Check Out Book" << endl;
	cout << "I - Check In Book" << endl;
	cout << "R - Recheck Book" << endl;
	cout << "L - Report Book Lost" << endl;
	cout << "S - Search" << endl;
	cout << "P - Print" << endl;
	cout << "Q - Quit" << endl;
	cout << endl << endl << "Choose an option(lowercase): ";
	cin >> choice;
	cin.ignore();
	return choice;
}

void search_options(Members_Collection library_members_list, Books_Collection library_books_list, Loans_Collection library_loans_list){
	char search_choice;
	cout << "What would you like to search for" << endl;
	cout << "M - Member" << endl;
	cout << "B - Book" << endl;
	cout << "L - Loan" << endl;
	cout << "Choose an option(lowercase): ";
	cin >> search_choice;
	cin.ignore();

	if(search_choice == 'm'){
		library_members_list.find_members();
	}
	else if(search_choice == 'b'){
		library_books_list.find_books();
	}
	else if(search_choice == 'l'){
		library_loans_list.find_loans();
	}
	else{
		cout << "Option not found" << endl;
	}
	return;
}

void print_options(Members_Collection library_members_list, Books_Collection library_books_list, Loans_Collection library_loans_list){
	char print_choice;
	cout << "What would you like print" << endl;
	cout << "M - Members" << endl;
	cout << "B - Books" << endl;
	cout << "L - Loans" << endl;
	cout << "Choose an option(lowercase): ";
	cin >> print_choice;
	cin.ignore();

	if(print_choice == 'm'){
		library_members_list.print_all_members();
	}
	else if(print_choice == 'b'){
		library_books_list.print_all_books();
	}
	else if(print_choice == 'l'){
		library_loans_list.print_all_loans();
	}
	else{
		cout << "Option not found" << endl;
	}
	return;
}
