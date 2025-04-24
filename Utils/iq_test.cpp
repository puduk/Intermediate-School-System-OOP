#include <iostream>
#include "iq_test.hpp"
#include <algorithm>
#include "management.hpp"
#include "account_final_create.hpp"

#include <iomanip>



using namespace std;

void iq_test(Student &s){

    cout << "-----------------------" << endl;
    cout << "Welcome to the iq test!" << endl;
    cout << "-----------------------" << endl;
    cout << "For creating account you should pass our iq test:)" << endl;

    for (int i = 0 ; i < s.iq_question_count ; i++){
      cout << s.iq_questions[i] << endl;
      cin >> s.iq_input;

      transform(s.iq_input.begin(), s.iq_input.end(), s.iq_input.begin(),::tolower);
      if(s.iq_input == s.iq_answers[i]){
        cout << "Correct!" << endl;
        s.iq_level ++;
        cout << "Currect score: " << s.iq_level << endl;
      }else{
        cout << "Wrong!" << endl;
        cout << "True answer was: " << s.iq_answers[i] << endl;
        cout << "Currect score: " << s.iq_level << endl;
        }
      }


  if (s.iq_level < 5) {
    cout << "Unfortunately!" << endl;
    cout << "You failed in iq test" << endl;
    cout << "Iq score: " << s.iq_level  << endl;
    cout << "Your account did not created!" << endl;
    exit(0);
  }

  cout << "You passed iq test successfully!" << endl;
  cout << "Iq score: " << s.iq_level  << endl;


  cout << setw(20)<<"----------------------------"<<endl;
  cout << "Your account has created successfully!" << endl;
  account_final_create(s);


}
