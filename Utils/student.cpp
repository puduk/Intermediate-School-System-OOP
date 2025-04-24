
#include "student.hpp"
using namespace std;
string Student::english_questions[Student::english_question_count] = {
    "How old ... you?",
    "Where ... you yesterday?",
    "How ... money you want?",
    "Neither my brother nor I ... good at math.",
    "As soon as she ... home, she called her mom."
};
string Student::english_answers[Student::english_question_count] = {
    "are" , "were" , "much" , "am" ,"got"
};
string Student::iq_questions[iq_question_count] = {
    "10 + 5",
    "9 + 110",
    "9 x 9",
    "5!",
    "log 8",
    "What is the next number in the sequence: 2, 3, 5, 8, 12, ?",
    "If it takes 5 machines 5 minutes to make 5 parts, how long would 100 machines take to make 100 parts?",
    "Mary’s father has 5 daughters: Nana, Nene, Nini, Nono. What is the name of the fifth daughter?",
    "If 1 = 5, 2 = 25, 3 = 325, 4 = 4325, then 5 = ?"

};
string Student::iq_answers[iq_question_count] = {
    "15", "119", "81", "120", "3", "17", "5", "mary", "1"
};

const short Student::school_fee = 5000;
const short Student::young_scholarship = 750;
const short Student::success_scholarship = 1000;
const short Student::polish_scholarship = 5000;
const short Student::young_success_scholarship = 2000;

const short Student::european_young_scholarship = 1250;
const short Student::european_young_success_scholarship = 2500;
const short Student::european_success_scholarship = 1500;
const short Student::european_scholarship = 500 ;



Student::Student(){

    name = "" ; //
    surname  = ""; //
    group    = ""; //
    student_number  = ""; //
    parents_name  = ""; //
    parent_type  = "";
    citizenship = ""; //
    european_citizenship = "" ; //
    username = ""; //
    gender = ' '; //
    age = 0; //


    english_level = 0;
    iq_level = 0;
    english_input = "";
    iq_input  = "";

    absence_choice = 0; //
    absence_shower = 0; //
    absence_adder = 0;
    absence_remover = 0;

    best_subject_choice = 0; //
    best_subject_shower = 0; //
    citizenship_choice = 0;  //
    first_page_choice = 0;  //
    management_choice = 0;


    for (int i = 0 ; i < max_subject_count ; i++) {
        subjects[i] = "" ;
        subject_grades[i] = 0.0;

    }

    for (int i = 0 ; i < deleted_subject_capacity ; i++) {
        deleted_subjects[i] = "" ;
        deleted_subject_grades[i] = 0.0;

    }


    for (int i = 0 ; i < updating_subject_capacity ; i++) {
        updating_subjects[i] = "" ;
        updating_subject_grades[i] = 0.0 ;
    }

    subject_updater_choice = 0;
    updated_grade_holder = 0;




    deleted_subjects_amount  = 0;

    best_grade = 0;
    worst_grade = 0;


    subject_remover_order = 0;

    current_fee = 0;
    payable_fee = school_fee - paid_fee ;
    paid_fee = 0;

    promo_code = 0;

    balance_panel_choice = 0;

    promo_code_used = false;

    current_subject_count = 0;
    subject_panel_choice = 0;  //

    pin_number = 0;
    height = 0.0;
    weight = 0.0;
    bmi_score = weight /(height * height );
}


