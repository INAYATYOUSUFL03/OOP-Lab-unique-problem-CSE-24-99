#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Diary {
public:
    void addEntry() {
        ofstream out("diary.txt", ios::app);
        string entry;
        cin.ignore();
        cout << "\nWrite your diary entry:\n";
        getline(cin, entry);
        out << entry << endl;
        out.close();
        cout << "✅ Entry saved!\n";
    }

    void viewEntries() {
        ifstream in("diary.txt");
        string line;
        cout << "\n📖 Your Diary Entries:\n";
        while(getline(in, line)) {
            cout << "- " << line << endl;
        }
        in.close();
    }
};

int main() {
    Diary d;
    int choice;
    do {
        cout << "\n====== PERSONAL DIARY ======\n";
        cout << "1. Add New Entry\n2. View All Entries\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1: d.addEntry(); break;
            case 2: d.viewEntries(); break;
            case 3: cout << "👋 Exiting Diary. Take care!\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while(choice!=3);
    return 0;
}
