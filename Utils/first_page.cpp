#include <iostream>
#include "student.hpp"
#include "first_page.hpp"
#include "create_account.hpp"
#include "sign_in.hpp"

using namespace std;


void first_page(Student & s){



  cout << "--------------------" << endl;
  cout << "--------------------" << endl;
  cout << "1 for sign in" << endl;
  cout << "2 for creating account " << endl;
  cout << "3 for quit" << endl;


  while (true){
    cin >> s.first_page_choice;
    switch (s.first_page_choice){
      case 1:
        sign_in(s);
        break;

      case 2:
        create_account(s);
        break;
      case 3:
        cout << "Quiting..." << endl;
        exit(0);
      default:
        cout << "Invalid choice" << endl;
        cout << "Please enter a valid choice" << endl;
    }
    break;
  }
}



