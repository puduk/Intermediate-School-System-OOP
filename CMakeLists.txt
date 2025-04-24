cmake_minimum_required(VERSION 3.30)
project(SixthProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(SixthProject main.cpp Utils/absences_panel.cpp Utils/balance_panel.cpp Utils/create_account.cpp Utils/english_test.cpp
Utils/first_page.cpp Utils/iq_test.cpp Utils/management.cpp Utils/scholarship.cpp Utils/sign_in.cpp Utils/student.cpp Utils/student_card.cpp
Utils/subject_panel.cpp Utils/account_final_create.cpp Utils/load_user_data.cpp

)
