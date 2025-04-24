#include "absences_panel.hpp"
#include <iostream>
#include "management.hpp"


using namespace std;

void absence_adding(Student &s);
void absence_removing(Student &s);
void  absence_showering(Student &s);

void absences_panel(Student &s){


  while(true){
    cout << "------------------------------" << endl;
    cout << "Welcome to the Absences Panel" << endl;
    cout << "-----------------------------" << endl;
    cout << "1 for Absence Adding" << endl;
    cout << "2 for Absence Removing" << endl;
    cout << "3 for Current Absences" << endl;
    cout << "4 for Previous Page" << endl;
    cout << "-----------------------------" << endl;

    cout << "Enter your choice: " << endl;
    cin >> s.absence_choice;

    switch(s.absence_choice){
      case 1:
        absence_adding(s);
        break;
      case 2:
        absence_removing(s);
        break;
      case 3:
        absence_showering(s);
        break;
      case 4:
        return management(s);
      default:
        cout << "Invalid Choice!" << endl;
      }
    }
}

void absence_adding(Student &s){

  cout << "How many absences do you want to add?" << endl;
  cin >> s.absence_adder;

  if(s.absence_adder < 0){
    cout << "You can not add negative absences" << endl;
  }else if (s.absence_adder > 5){
    cout << "You can not add more then 5 absences" << endl;
    cout << "You try to add: " << s.absence_adder << endl;
  }else {
    s.absence_shower += s.absence_adder;
    cout << "You absences added successfully" << endl;
    cout << "Current adding: " << s.absence_adder << endl;
    cout << "Current absences: " << s.absence_shower << endl;


  }
}

void absence_removing(Student &s){
  cout << "How many absences do you want to remove?" << endl;
  cin >> s.absence_remover;

  if(s.absence_remover < 0){
    cout << "You can not remove negative absences" << endl;
  }else if (s.absence_remover > 5){
    cout << "You can not remove more then 5 absences" << endl;
    cout << "You try to remove : " << s.absence_remover << endl;
  }else {
    s.absence_shower -= s.absence_remover;
    cout << "You absences removed successfully" << endl;
    cout << "Current removing: " << s.absence_remover << endl;
    cout << "Current absences: " << s.absence_shower << endl;


    }
}

void absence_showering(Student &s){
   cout << "You have " << s.absence_shower << " absences" << endl;


}




