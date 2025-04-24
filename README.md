# 🎓 Intermediate School System OOP

A modular, C++-based console application simulating a real-world school management system.  
It includes account creation, login, personalized data files, and multiple educational panels.

---

## 🧩 Features

### 🔐 Account System
- User-generated username and PIN
- Login screen with credential verification
- Each user has their own `.txt` file to store data

### 📚 Student Panels
- 🧠 IQ Test  
- 🇬🇧 English Test  
- 💸 Balance Panel (Tuition payment system)  
- 📝 Subject Panel (Add/update/remove subjects and grades)  
- 📆 Absences Panel  
- 🎓 Scholarship Evaluation  
- 🪪 Student Card Generator

### 🧾 File Handling
- `student.txt` used as global registry  
- Individual `username.txt` files for per-student data  
- All file operations handled with `fstream`,`ofstream` and `ifstream`

### ⚙️ Project Structure
- Each module in its own `.cpp` / `.hpp` file inside `Utils/`
- CMake build system ready (`CMakeLists.txt`)
- Clean and scalable design

---
## 🧠 Developer Note

- All data handling and logic are centralized within `student.cpp` and `student.hpp`.
- The codebase is designed with a focus on clarity, modularity, and clean architecture.
- Standard C++ file I/O (`fstream`, `ofstream`, `ifstream`) was used exclusively — no external libraries.
- This version is fully console-based. A **Qt GUI version** is planned for future development.

> ⚠️ Note: There are known bugs when writing student subjects using `ofstream` and arrays.  
> These will be addressed after planned feature implementations and upcoming project iterations.


## 🖥️ Build & Run

```bash
mkdir build
cd build
cmake ..
make
```

```
--------------------
--------------------
1 for sign in
2 for creating account 
3 for quit

```
### 👤 Account Details – Student Info Entry
```
Hello users!
What is your Name: 
mert
What is your Surname: 
demir
Which Group are you in: 
19-b
What is your Student Number : 
453s
```
### 🇬🇧 English Test Panel
```
----------------------------
Welcome to the english test!
----------------------------
Correct!
Current Score: 5
You passed english test successfully!
English score: 5

```
### 🧠 IQ Test Panel
```
-----------------------
Welcome to the iq test!
-----------------------
Correct!
Currect score: 9
You passed iq test successfully!
Iq score: 9
```

## 🧾 Choose Username 

```
Please create a username: pudukiye
Please create your pin number: 123123
Account Created!

```
## 🧾 Sign In Panel


```
1 for sign in
2 for creating account 
3 for quit
1
Please enter your username:
pudukiye
Please enter your pin_number:
123123
Welcome pudukiye
```
### 🧾 Main School System Menu
```

------------------------------
Welcome To The School System: 
------------------------------
1 for Subject Panel: 
2 for Absences Panel: 
3 for Student Card:
4 for Scholarship Panel: 
5 for Balance Panel: 
Which Option Are You Chosing: 

```

---

### 📚 Subject Panel


```
------------------------------
Welcome to the Subject Panel
-----------------------------
1 for Adding Subject
2 for Updating Subject Grade
3 for Removing Subject
4 for Current Subjects
5 for Showing Deleted Subject
6 for Showing Best Subject
7 for Showing Worst Subject
8 for Previous Page.
-----------------------------

```

---

### 🎓 Scholarship Panel


```
----------------------------------------------------------
Welcome to scholarship Page!
Scholarship Request!
----------------------------
1. No failed subject!
2. Every Citizenship Will have different Scholarship rate!
3. Your age is important!
----------------------------------------------------------
Do you have European Citizenship: 
NO
Where are you from: 
POLAND
Our School Fee Is Free For Polish Students!
With appliying: 908762 Promo Code You Can Activate Your $5000 Scholarship!

```

---

### 💰 Balance Panel


```
--------------------------
===== Balance panel =====
========================
1 for Paying School Fee:
2 for Paid School Fee:
3 for Avaliable Payment:
4 for Applying Promo Code:
5 for Previous Page: 

```

---

> 📌 These are real runtime outputs from the CLI. Each panel is written in a modular `.cpp/.hpp` structure inside `Utils/`.


## 📄 License

This project is licensed under the [MIT License](LICENSE).

