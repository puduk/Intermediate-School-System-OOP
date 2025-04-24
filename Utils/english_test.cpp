#include <iostream>
#include "english_test.hpp"


#include <algorithm>


#include "iq_test.hpp"

using namespace std;


void English_test(Student &s) {

  cout << "----------------------------" << endl;
  cout << "Welcome to the english test!" << endl;
  cout << "----------------------------" << endl;
  cout << "For creating account you should pass our english test:)" << endl;

  for(int i = 0 ; i < s.english_question_count ; i++) {
    cout << s.english_questions[i] << endl;
    cin >> s.english_input;

    transform(s.english_input.begin(), s.english_input.end(), s.english_input.begin(),::tolower);

    if(s.english_input == s.english_answers[i]) {
      cout << "Correct!" << endl;
      s.english_level++ ;
      cout << "Current Score: " << s.english_level  << endl;
    }else {

      cout << "Wrong!" << endl;
      cout << "True answer was: " << s.english_answers[i] << endl;
      cout << "Current score: " << s.english_level  << endl;
      }
  }
  if (s.english_level < 3) {
    cout << "Unfortunately!" << endl;
    cout << "You failed in english test" << endl;
    cout << "English score: " << s.english_level  << endl;
    exit(0);
  }

    cout << "You passed english test successfully!" << endl;
    cout << "English score: " << s.english_level  << endl;


    return iq_test(s);

}
