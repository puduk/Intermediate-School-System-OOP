#include <iostream>
#include <fstream>

#include "sign_in.hpp"
#include "management.hpp"


using namespace std;

void sign_in(Student &s) {
    cout << "Please enter your username:" << endl;
    cin >> s.username;

    cout << "Please enter your pin_number:" << endl;
    cin >> s.pin_number;


    ifstream file ("students.txt" , ios::in);
    if (!file.is_open()) {
        cout << "File could not be opened" << endl;
        return;
    }


    string line ;
    string found_username;
    int found_pin_number;
    bool login_success = false;;

    while (getline(file , line)) {
        if ( line.find("Username:") != string::npos) {
            found_username = line.substr(line.find(":") + 1);
        }else if (line.find("Pin:") != string::npos) {
            found_pin_number = stoi(line.substr(line.find(":") + 1));

            if (found_pin_number == s.pin_number && found_username == s.username) {
                login_success = true;
            }
        }
    }

    file.close();

    if (login_success) {
        ifstream userfile (s.username + ".txt" , ios::in);
        if (!userfile.is_open()) {
            cout << "File could not be opened" << endl;
            return;
        }

        cout << "Welcome " << s.username << endl;
        userfile.close();
        management(s);

    }else {
        cout << "Wrong password or username" << endl;
    }
}



