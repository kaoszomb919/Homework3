/* Dylan Norris
 * 10/12/22
 * David Keathly
 * 
 */

#include <iostream>
#include <ctime>
#include <string>
#include "books.h"
#include "patrons.h"
#include "loans.h"

using namespace std;

Books books = Books();
Patrons patrons = Patrons();
Loans loans = Loans();
int bookNumber = 1;
int patronNumber = 1;
int loanNumber = 1;

void printMenu();
void executeMenu();

int main() {

    executeMenu();

    return 0;
}

void printMenu() {
    cout << "Menu" << endl;
    cout << "b - Add Book" << endl;
    cout << "p - Add Patron" << endl;
    cout << "o - Check Out Book" << endl;
    cout << "i - Check In Book" << endl;
    cout << "r - Renew Book" << endl;
    cout << "f - Pay Fines" << endl;
    cout << "v - View Overdue Books" << endl;
    cout << "q - Quit" << endl;

    cout << "\nChoose an option: ";
}

void executeMenu() {
    char choice = 'a'; //to start the loop
    while (choice != 'q') {
        printMenu();
        cin >> choice;
        cout << endl;
        if (choice == 'b') 
            books.addBook(bookNumber++);

        else if (choice == 'p')
            patrons.addPatron(patronNumber++);

        else if (choice == 'o')
            loans.addLoan(books, patrons, loanNumber++);

        else if (choice == 'i') {


        } else if (choice == 'r') {


        } else if (choice == 'f') {

        } else if (choice == 'v') {
            int id;
            float payment;
            cout << "Enter Patron Id: ";
            cin >> id;
            cout << endl << "Enter payment amount: ";
            cin >> payment;
            cout << endl;
            patrons.payFineBalance(id, payment);
        } else if (choice == 'q')
            cout << "Goodbye!" << endl;
        else
            cout << "Input not valid. Please try again." << endl;

    }
    //list all patrons, books, and loans
}