#include <iostream>
#include <iomanip>
#include "create_account.hpp"
#include "english_test.hpp"
#include <fstream>

using namespace std;
void pin_number(Student &s);
void account_final_create(Student &s);


void create_account(Student &s) {
  cout << "----------------------------------------" << endl;
  cout << setw(20)<< "Hello users!" << endl;
  cout << setw(20)<<"What is your Name: "<<endl;
  cin >> s.name;
  cout << setw(20)<<"What is your Surname: "<<endl;
  cin >> s.surname ;
  cout << setw(20)<<"Which Group are you in: "<<endl;
  cin >> s.group;
  cout << setw(20)<<"What is your Student Number : "<<endl;
  cin >> s.student_number;
  cout << setw(20)<<"What is yor Parents Name : "<<endl;
  cin >> s.parents_name;
  cout << setw(20)<<"Relationship Type : "<<endl;
  cin >> s.parent_type;
  cout << setw(20)<<"Where are you from: "<<endl;
  cin >> s.citizenship;


  while (true){

    cout << setw(20)<<"What is your gender(F-M): "<<endl;
    cin >> s.gender;
    switch (s.gender){
      case 'F':
      case 'f':
        cout << "Gender Checking..." << endl;
      cout << "Gender Approved: " << s.gender << endl;
      cout << "You creating account as a female student" << endl;
      break;

      case 'M':
      case 'm':
        cout << "Gender Checking..." << endl;
      cout << "Gender Approved: " << s.gender << endl;
      cout << "You creating account as a male student" << endl;
      break;

      default:
        cout << "Gender Checking..." << endl;
      cout << "Gender did not approved: " << s.gender << endl;
      cout << "Come on..." << endl;
      cout << "There is only 2 gender" << endl;
      continue;
    }
    break;

  }


  while (true) {
    cout << setw(20)<<"What is your age : "<<endl;
    cin >> s.age;
    if (s.age >= 65) {
      cout << "Unfortunately!" << endl;
      cout << "Your age is over our age limit" << endl;
      cout << "We can not create account for you" << endl;
      exit(0);
    }

    if (s.age <= 15) {
      cout << "Unfortunately!" << endl;
      cout << "Your age is under our age limit" << endl;
      cout << "We can not create account for you" << endl;
      cout << "Please try later:) " << endl;
      exit(0);
    }

    cout << "Age Checking..." << endl;
    cout << "Age Approved: " << s.age << endl;

    cout << setw(20)<<"------------------------------"<<endl;
    break;
  }

  while (true) {
    cout << "What is your height (1.75) : "<<endl;
    cin >> s.height;

    if (s.height > 2.50) {
      cout << "Unfortunately!" << endl;
      cout << "Please enter the true height" << endl;
    }
    if (s.height < .99) {
      cout << "Unfortunately!" << endl;
      cout << "Please enter the true height" << endl;
    }

    cout << "What is your weight : "<<endl;
    cin >> s.weight;
    if (s.weight > 250) {
      cout << "Unfortunately!" << endl;
      cout << "Please enter the true weight" << endl;
    }
    if (s.weight < 10) {
      cout << "Unfortunately!" << endl;
      cout << "Please enter the true weight" << endl;
    }
    break;
  }

  s.bmi_score = s.weight / (s.height * s.height);



  English_test(s);
}

