#include <iostream>
#include "scholarship.hpp"
#include <algorithm>
#include "management.hpp"


using namespace std;

void scholarship(Student &s){

  cout << "----------------------------------------------------------" << endl;
  cout << "Welcome to scholarship Page!" << endl;
  cout << "Scholarship Request!" << endl;
  cout << "----------------------------" << endl;
  cout << "1. No failed subject!" << endl;
  cout << "2. Every Citizenship Will have different Scholarship rate!" << endl;
  cout << "3. Your age is important!" << endl;
  cout << "----------------------------------------------------------" << endl;

  cout << "Do you have European Citizenship: " << endl;
  cin >> s.european_citizenship;

  transform(s.european_citizenship.begin(),s.european_citizenship.end(),s.european_citizenship.begin(), :: tolower);


  cout << "Where are you from: " << endl;
  cin >> s.citizenship;

  transform(s.citizenship.begin(), s.citizenship.end(),s.citizenship.begin(),::tolower);

  if (s.citizenship == "poland"){
    cout << "Our School Fee Is Free For Polish Students!" << endl;
    cout << "With appliying: 908762 Promo Code You Can Activate Your $5000 Scholarship!" << endl;
    return;
  }else {

    if (s.european_citizenship == "no"){
      if (s.age < 18 && s.worst_grade >= 75 ){
        cout << "Our Offer Is Young Success Student Scholarship!" << endl;
        cout << "With appliying: 020304 Promo Code You Can get Your $2000 Scholarship!" << endl;
      }else if (s.worst_grade >= 75){
        cout << "Our Offer Is Successfull Student Scholarship!" << endl;
        cout << "With appliying: 121314 Promo Code You Can get Your $1000 Scholarship!" << endl;
      }else if (s.age < 18 ){
        cout << "Our Offer Is Young Student Scholarship!" << endl;
        cout << "With appliying: 020302 Promo Code You Can get Your $750 Scholarship!" << endl;
      }
      else {
        cout << "Unfortunately currently we dont have any scholarship offer for you" << endl;
        cout << "Please try again later!" << endl;
        return;
      }
    }else if(s.european_citizenship == "yes"){
      if(s.age < 18 && s.worst_grade >= 75){
        cout << "Our Offer is European Young Success Student Scholarship!" << endl;
        cout << "With applying 332145: Promo Code You Can get Your $2500 Scholarship!" << endl;
      }else if (s.worst_grade >=75 ){
        cout << "Our Offer is European Success Student Scholarship!" << endl;
        cout << "With applying 232122: Promo Code You Can get Your $1500 Scholarship!" << endl;
      }else if (s.age < 18 ){
        cout << "Our Offer Is Young European Student Scholarship!" << endl;
        cout << "With appliying: 020124 Promo Code You Can get Your $1250 Scholarship!" << endl;
      }
      else {
        cout << "Our Offer is European Student Scholarship!" << endl;
        cout << "With applying 2324356: Promo Code You Can get Your $500 Scholarship!" << endl;

        return;
      }
    }else {
      cout << "Unfortunately currently we dont have any scholarship offer for you" << endl;
      cout << "Please try again later!" << endl;
      return;
    }
}
return management(s);
}



