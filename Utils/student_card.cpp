#include <iostream>
#include "student_card.hpp"
#include <iomanip>
#include "management.hpp"


using namespace std;

void student_card(Student &s){





  cout << "----------------------------------------------------" << endl;
  cout << "------------------- Student Card -------------------" << endl;
  cout << setw(10) << "Student Name: " << s.name << endl;
  cout << setw(10) << "Student Surname: " << s.surname << endl;
  if (s.gender == 'f' || s.gender == 'F') {
       cout << "Student Gender: Female (" << s.gender << ")"<<endl;
  }else
       cout << "Student Gender: Male (" << s.gender << ")"<<endl;

  cout << setw(10) << "Student Number: " << s.student_number << endl;



  cout << "----------------------------------------------------" << endl;
  cout << setw(10) << "Academic Information" << endl;
  cout << setw(10) << "Best Subject: " << s.subjects[s.best_grade] << " " << s.subject_grades[s.best_grade] << endl;
  cout << setw(10) << "Worst Subject: " << s.subjects[s.worst_grade] <<  " " << s.subject_grades[s.worst_grade]<<endl;

  if (s.deleted_subjects_amount > 0){
    cout << setw(10) << "Deleted Subject:" << s.deleted_subjects[s.deleted_subjects_amount - 1] << endl;   // -1 cunku arrayler 0 dan baslar
  }
  else{
    cout << "Deleted Subjects:  NONE" << endl;

  }




  if (s.english_level > 4){
    cout << "Student English Level: C1+" <<  endl;
  }else if (s.english_level > 3){
    cout << "Student English Level: B2+" <<  endl;
  }else if (s.english_level > 2){
    cout << "Student English Level: B1+" <<  endl;
  }else if (s.english_level > 1){
    cout << "Student English Level: A2+" <<  endl;
  }else
    cout << "Student English Level: A1+" <<  endl;

  switch (s.iq_level){
    case 1:
      cout << "Student IQ Level: 70" <<  endl;
      break;
    case 2:
      cout << "Student IQ Level: 80" <<  endl;
      break;
    case 3:
      cout << "Student IQ Level: 90" <<  endl;
      break;
    case 4:
      cout << "Student IQ Level: 100" <<  endl;
      break;
    case 5:
      cout << "Student IQ Level: 110" <<  endl;
      break;
    case 6:
      cout << "Student IQ Level: 120" <<  endl;
      break;
    case 7:
      cout << "Student IQ Level: 130" <<  endl;
      break;
    case 8:
      cout << "Student IQ Level: 140" <<  endl;
      break;
    case 9:
      cout << "Student IQ Level: 150" <<  endl;
      break;
  }

  cout << "----------------------------------------------------" << endl;
  cout << "=============== Pyhsical Information ==============" << endl;
  cout << setw(10) << ">> Height: " << s.height << endl;
  cout << setw(10) << ">> Weight: " << s.weight << endl;
  cout << setw(10) << ">> Age: " << s.age <<  endl;
  cout << setw(10) << ">> Bmi Score: " << s.bmi_score << endl;
  cout << "----------------------------------------------------" << endl;



  return management(s);
  }









