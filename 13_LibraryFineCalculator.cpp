#include <iostream>
using namespace std;

int main() {
    int days;
    cout << "Enter number of late days: ";
    cin >> days;
    
    if(days<=5) cout << "Fine = " << days*2 << " Rs";
    else if(days<=10) cout << "Fine = " << (5*2 + (days-5)*5) << " Rs";
    else cout << "Fine = " << (5*2 + 5*5 + (days-10)*10) << " Rs";
}
