#include "subject_panel.hpp"
#include <iostream>
#include "management.hpp"


using namespace std;

void subject_adding(Student &s);
void subject_remover(Student &s);
void subject_shower(Student &s);
void deleted_subjects_shower(Student &s);
void best_grade(Student &s);
void worst_grade(Student &s);
void grade_update(Student &s);


void subject_panel(Student &s){



    while(true){

      cout << "------------------------------" << endl;
      cout << "Welcome to the Subject Panel" << endl;
      cout << "-----------------------------" << endl;
      cout << "1 for Adding Subject" << endl;
      cout << "2 for Updating Subject Grade" << endl;
      cout << "3 for Removing Subject" << endl;
      cout << "4 for Current Subjects" << endl;
      cout << "5 for Showing Deleted Subject" << endl;
      cout << "6 for Showing Best Subject" << endl;
      cout << "7 for Showing Worst Subject" << endl;
      cout << "8 for Previous Page." << endl;
      cout << "-----------------------------" << endl;


      cout << "Your Choice: " << endl;
      cin >> s.subject_panel_choice;

      switch(s.subject_panel_choice){
        case 1:
          subject_adding(s);
          break;
        case 2:
          grade_update(s);
          break;
        case 3:
          subject_remover(s);
          break;
        case 4:
          subject_shower(s);
          break;
        case 5:
          deleted_subjects_shower(s);
          break;
        case 6:
          best_grade(s);
          break;
        case 7:
          worst_grade(s);
          break;
        case 8:
          // bu kismi yarin yapicam management(s) gelicek
          return management(s); ;

        default:
          cout << "Invalid Choice. Try again.  " << endl;
          continue;

      }
    }
  }

void subject_adding(Student &s){


  while(true){
    cout << "------------------------------" << endl;
    cout << "Welcome to the Subject Adder" << endl;
    cout << "-----------------------------" << endl;
    cout << "How many subjects do you want to add: " << endl;
    cin >> s.subject_adder ;


    if (s.subject_adder > s.max_subject_count){
      cout << "In one semester you can not have more then 10 subjects" << endl;
      cout << "You already have " << s.current_subject_count << " subjects" << endl;
    }else if (s.subject_adder < 0){
      cout << "You can not add 0 subjects" << endl;
    }else {

      for (int i =0; i < s.subject_adder; i++){
        cout << "Please enter the subject name:" ;
        cin >> s.subjects[s.current_subject_count];

        while (true){

        cout << "What is your grade in: "  << s.subjects[s.current_subject_count] << endl;
        cin >> s.subject_grades[s.current_subject_count];

        if (s.subject_grades[s.current_subject_count] > 100){
          cout << "Your grade cannot be bigger then 100" << endl;
        }else if (s.subject_grades[s.current_subject_count] < 0){
          cout << "Your grade cannot be smaller then 0" << endl;
        }
        else {
          cout << "Subject: " << s.subjects[s.current_subject_count] << "Succesfully added" ;
          cout << "Your grade in : " << s.subjects[s.current_subject_count] << "(" <<s.subject_grades[s.current_subject_count] << ")" << endl;


          s.current_subject_count ++;

          break;
          }
        }
      }
      break;
     }
    }
}



void grade_update(Student &s){

  if(s.current_subject_count == 0 ){
    cout << "There is no subject: " ;
    return;
  }

  cout << "Current Subjects: " << endl;
 for (int i = 0; i < s.current_subject_count; i++){
   cout << i + 1 << ". " << s.subjects[i] <<  "Grade: " << s.subject_grades[i] << endl;
 }
 cout << "Which subject you want to update?" << endl;
 cin >> s.subject_updater_choice;
 s.subject_updater_choice --;

 if (s.subject_updater_choice >= s.current_subject_count || s.subject_updater_choice < 0) {
   cout << "An error has occured" << endl;
   cout << "Invalid Choice. Try again." << endl;
   return;
 }

 cout << "What is the new grade: " << endl;
 cin >> s.updated_grade_holder;

 s.subject_grades[s.subject_updater_choice] = s.updated_grade_holder;

 cout << "Grade Successfully updated" << endl;
 cout << s.subjects[s.subject_updater_choice] << " Grade: " << s.subject_grades[s.subject_updater_choice] << endl;

}


void subject_remover(Student &s){

  if (s.current_subject_count == 0){
    cout << "There is no subject" << endl;
    return;
  }

  cout << "------------------------------" << endl;
  cout << "Welcome to the Subject Remover" << endl;
  cout << "------------------------------" << endl;

  cout << "Current subjects are: " << endl;
  for (int i =0; i < s.current_subject_count; i++){
    cout <<  i + 1 << " . " << s.subjects[i] <<  "Grade: " << s.subject_grades[i] << endl;
  }

  cout << "Which subjects you want to remove?" << endl;
  cin >> s.subject_remover_order;
  s.subject_remover_order --;


  if (s.subject_remover_order < 0 || s.subject_remover_order >= s.current_subject_count){
    cout << "An error has occured!" << endl;
    cout << "You entered an invalid choice" << endl;
    return;
  }

  s.deleted_subjects[s.deleted_subjects_amount] = s.subjects[s.subject_remover_order];
  s.deleted_subjects_amount++ ;

  for (int i = s.subject_remover_order; i < s.current_subject_count; i++){
    s.subjects[i] = s.subjects[i + 1];
    s.subject_grades[i] = s.subject_grades[i + 1];

  }
  s.current_subject_count --;

  cout << "Subject successfully deleted" << s.deleted_subjects[s.deleted_subjects_amount - 1] << endl;

}



void subject_shower(Student &s){

  if (s.current_subject_count == 0){
    cout << "There is no subject" << endl;
    return;
  }

  cout << "-----------------------------" << endl;
  cout << "Current selected subject: " << endl;


  for (int i  = 0 ; i < s.current_subject_count ; i++){
    cout << i + 1 << ". " << s.subjects[i] << "Grade: " <<  s.subject_grades[i] << endl;
  }


  cout << "-----------------------------" << endl;

}

void deleted_subjects_shower(Student &s){

  if(s.deleted_subjects_amount == 0){
    cout << "There is no subject" << endl;
    return;
  }

  cout << "-----------------------------" << endl;
  cout << "Deleted Subjects: " << endl;

  for (int i = 0; i < s.deleted_subjects_amount; i++){
    cout << i + 1 << ". " << s.deleted_subjects[i] << "Grade: " << s.deleted_subject_grades[i] << endl;
  }
  cout << "-----------------------------" << endl;


}

void best_grade(Student &s){

  if (s.current_subject_count == 0){
    cout << "There is no subject" << endl;
    return;
  }

  for (int i =0; i < s.current_subject_count; i++){
    if (s.subject_grades[i] > s.subject_grades[s.best_grade]){
      s.best_grade = i;
    }
  }

  cout << "----------------------------" << endl;
  cout << "Best Subjects: " << s.subjects[s.best_grade] << "Grade: " << s.subject_grades[s.best_grade] <<endl;

}

void worst_grade(Student &s){

  if (s.current_subject_count == 0){
    cout << "There is no subject" << endl;
    return;
  }

  for (int i = 0; i< s.current_subject_count; i++){
    if (s.subject_grades[i] < s.subject_grades[s.worst_grade]){
      s.worst_grade = i;

    }

  }

  cout << "----------------------------" << endl;
  cout << "Worst Subject: " << s.subjects[s.worst_grade] << "Grade: " << s.subject_grades[s.worst_grade] <<endl;


}

