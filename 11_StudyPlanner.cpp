#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string,int> study;
    int hrs; string subject;
    char cont='y';

    while(cont=='y') {
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter hours studied: ";
        cin >> hrs;
        study[subject]+=hrs;
        cout << "Add more? (y/n): ";
        cin >> cont;
    }

    cout << "\nStudy Report:\n";
    for(auto &s: study)
        cout << s.first << " = " << s.second << " hrs\n";
    return 0;
}
