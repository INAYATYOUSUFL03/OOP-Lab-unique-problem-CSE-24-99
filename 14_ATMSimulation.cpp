#include <iostream>
using namespace std;

int main() {
    double balance = 100000; 
    int choice; double amount;

    do {
        cout << "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: cout << "Balance = " << balance; break;
            case 2: cout << "Enter deposit amount: "; cin >> amount; balance+=amount; break;
            case 3: cout << "Enter withdraw amount: "; cin >> amount; 
                    if(amount<=balance) balance-=amount; else cout << "Insufficient balance!"; 
                    break;
            case 4: cout << "Exiting..."; break;
            default: cout << "Invalid choice!";
        }
    } while(choice!=4);
}
