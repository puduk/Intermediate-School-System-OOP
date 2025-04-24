#include "account_final_create.hpp"
#include <iostream>
#include <fstream>
#include "management.hpp"


using namespace std;

void account_final_create(Student &s) {
    cout << "Please create a username: ";
    cin >> s.username;

    cout << "Please create your pin number: ";
    cin >> s.pin_number;


    ofstream file ("student.txt" ,ios::app) ;
    if (!file.is_open()) {
        cout << "Unable to open file" << endl;
        cout << "Please try again later." << endl;
    }
    file << "Username:" << s.username << endl;
    file << "Pin:" << s.pin_number << endl;
    file.close();


    ofstream userfile (s.username + ".txt", ios::app);
    if (!userfile.is_open()) {
        cout << "Unable to open file" << endl;
        cout << "Please try again later." << endl;
        return;
    }


    userfile << "Username:" << s.username << endl;
    userfile << "Pin:" << s.pin_number << endl;
    userfile << "Name:" << s.name << endl;
    userfile << "Surname:" << s.surname << endl;
    userfile << "Group:" << s.group << endl;
    userfile << "Student Number:" << s.student_number << endl;
    userfile << "Parents Name:" << s.parents_name << endl;
    userfile << "Parent Type:" << s.parent_type << endl;
    userfile << "Citizenship:" << s.citizenship << endl;
    userfile << "Gender:" << s.gender << endl;
    userfile << "Age:" << s.age << endl;
    userfile << "English Level:" << s.english_level << endl;
    userfile << "Iq level:" << s.iq_level << endl;
    userfile << "Paid Amount:" << s.paid_fee << endl;
    userfile << "Payable Amount:" << s.payable_fee << endl;
    userfile << "Scholarship Activated:" << (s.promo_code_used ? "Yes" : "No") << endl;
    userfile << "Height:" << s.height << endl;
    userfile << "Weight:" << s.weight << endl;


    userfile << "Subjects and Grade: " << endl;
    if (s.current_subject_count == 0) {
        userfile << "No Any Subject Found:" << endl;
    }
    for (int i = 0 ; i < s.current_subject_count ; i++) {
        userfile << s.subjects[i] << " Grade: " <<s.subject_grades[i] <<endl;
    }

    userfile << "Removed Subjects: " << endl;
    if (s.deleted_subjects_amount == 0 ) {
        userfile << "No Any Subject Found:" << endl;
    }
    for (int i = 0 ; i < s.deleted_subjects_amount ; i++) {
        userfile << s.deleted_subjects[i] << " Grade: " <<s.deleted_subject_grades[i] <<endl;
    }

    if (s.subject_updater_choice != 0 && s.updated_grade_holder != 0) {
        userfile << "Updated Subject: " << s.subjects[s.subject_updater_choice] << " Grade: " << s.updated_grade_holder << endl;
    }
    userfile.close();


    cout << "Account Created!" << endl;
    management(s);

}



