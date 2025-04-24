#include "management.hpp"
#include "subject_panel.hpp"
#include "absences_panel.hpp"
#include "student_card.hpp"
#include "scholarship.hpp"
#include "balance_panel.hpp"
#include <iostream>



using namespace std;

void management(Student &s){


  cout << "------------------------------" << endl;
  cout << "Welcome To The School System: " << endl;
  cout << "------------------------------" << endl;
  cout << "1 for Subject Panel: " << endl;
  cout << "2 for Absnces Panel: " << endl;
  cout << "3 for Student Card:" << endl;
  cout << "4 for Scholarship Panel: " << endl;
  cout << "5 for Balance Panel: " << endl;

  while(true){
      cout << "Which Option Are You Chosing: " << endl;
      cin >> s.citizenship_choice;

      switch(s.citizenship_choice){
        case 1:


          subject_panel(s);
          break;
        case 2:


          absences_panel(s);
          break;
        case 3:


          student_card(s);
          break;
        case 4:


          scholarship(s);
          break;
        case 5:


          balance_panel(s);
          break;
        default:
          cout << "Invalid Choice" << endl;
      }
    }
}
