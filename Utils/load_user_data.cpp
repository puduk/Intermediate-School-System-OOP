#include <iostream>
#include <fstream>
#include "load_user_data.hpp"
using namespace std;


void load_user_data(Student &s) {
    ifstream userfile (s.username + ".txt" , ios::in);
    if (!userfile.is_open()) {
        cout << "Unable to load user data."<< endl;
        return;
    }

    string userline;
    while (getline(userfile, userline)) {
        size_t pos = userline.find(":");
        if ( pos == string::npos || pos + 1 >= userline.length()) continue;

        string key = userline.substr(0, pos + 1);
        string value = userline.substr(pos + 1 , userline.length());

        if (key == "Username:") s.username = value;
        else if (key == "Pin:") s.pin_number = stoi(value);
        else if (key == "Name:") s.name = value;
        else if (key == "Surname:") s.surname = value;
        else if (key == "Group:") s.group = value;
        else if (key == "Student Number:") s.student_number = value;
        else if (key == "Parents Name:") s.parents_name = value;
        else if (key == "Parent Type:") s.parent_type = value;
        else if (key == "Citizenship:") s.citizenship = value;
        else if (key == "Gender:") s.gender = stoi(value);
        else if (key == "Age:") s.age = stoi(value);
        else if (key == "English Level:") s.english_level = stoi(value);
        else if (key == "Iq Level:") s.iq_level = stoi(value);
        else if (key == "Paid Amount:") s.paid_fee = stoi(value);
        else if (key == "Payable Amount:") s.payable_fee = stoi(value);
        else if (key == "Scholarship Activated:") {
            s.promo_code_used = (value == "Yes");
        }
        else if (key == "Height:") s.height = stoi(value);
        else if (key == "Weight:") s.weight = stoi(value);

        else if (key == "Subjects and Grade: ") {

            while (getline(userfile, userline)) {
                if (userline.find(":") == string::npos) continue;

                size_t pos_subject = userline.find(" Grade: ");
                string subject = userline.substr(0 , pos_subject);
                int grade = stoi(userline.substr(pos_subject + 7));


                s.subjects[s.current_subject_count] = subject;
                s.subject_grades[s.current_subject_count] = grade;
                s.current_subject_count++;
            }
        }

        else if (key == "Removed Subjects :") {
            while (getline(userfile, userline)) {

                if (userline.empty()) continue;

                size_t pos_del = userline.find(" Grade: ");
                string del_subject = userline.substr(0 , pos_del);
                int del_grade = stoi(userline.substr(pos_del + 7));

                s.deleted_subjects[s.deleted_subjects_amount] = del_subject;
                s.deleted_subject_grades[s.deleted_subjects_amount] = del_grade;
                s.deleted_subjects_amount++;
            }
        }
        else if (key == "Updated Subjects: ") {
            size_t pos_upt = userline.find(" Grade: ");
            string upt_subject = userline.substr(0 , pos_upt);
            int upt_grade = stoi(userline.substr(pos_upt + 7));

            s.subjects[s.subject_updater_choice] = upt_subject;
            s.updated_grade_holder = upt_grade;

        }
        }
    }















