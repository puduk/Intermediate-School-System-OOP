#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>




class Student

{

public:

  static const short school_fee ;
  static const short young_scholarship ;
  static const short success_scholarship ;
  static const short polish_scholarship ;
  static const short young_success_scholarship ;

  static const short european_young_scholarship;
  static const short european_young_success_scholarship;
  static const short european_success_scholarship;
  static const short european_scholarship;




  std::string name , surname , group , student_number , parents_name ,parent_type , citizenship , username , european_citizenship ;
  char gender;
  short age ;
  std::string english_input ;
  std::string iq_input ;
  short english_level;
  short iq_level;


  static constexpr  int english_question_count = 5;
  static constexpr  int iq_question_count = 9;

  static std::string english_questions[english_question_count];
  static std::string english_answers[english_question_count];
  static std::string iq_questions[iq_question_count];
  static std::string iq_answers[iq_question_count];

  static constexpr int max_subject_count = 10;
  std::string subjects[max_subject_count];
  double subject_grades[max_subject_count];

  static constexpr int deleted_subject_capacity = 10;
  std::string deleted_subjects[deleted_subject_capacity];
  double deleted_subject_grades[deleted_subject_capacity];

  static constexpr int updating_subject_capacity = 10;
  std::string updating_subjects[updating_subject_capacity];
  double updating_subject_grades[updating_subject_capacity];

  short subject_updater_choice;
  short updated_grade_holder;



  unsigned short deleted_subjects_amount ;


  short best_grade;
  short worst_grade;

  short subject_remover_order ;
  short absence_adder ;
  short absence_remover ;
  short absence_choice;
  int absence_shower;


  short best_subject_choice;
  short best_subject_shower;
  short citizenship_choice;
  short first_page_choice;
  short management_choice;
  int promo_code ;


  short current_fee;
  short paid_fee;
  short balance_panel_choice;
  int payable_fee;

  bool promo_code_used ;




  short current_subject_count;
  short subject_adder;
  short subject_panel_choice;


  int pin_number;


  double height , weight ;
  double bmi_score;


  Student() ;  // constructor
  };

#endif

