#include "balance_panel.hpp"
#include <iostream>
#include "management.hpp"


using namespace std;

void paying_fee(Student &s);
void promo_code(Student &s);

void balance_panel(Student &s){




  while (true){
     cout << "--------------------------" << endl;
  	cout << "===== Balance panel =====" << endl;
  	cout << "========================" << endl;
  	cout << "1 for Paying School Fee:" << endl;
  	cout << "2 for Paid School Fee:" << endl;
  	cout << "3 for Avaliable Payment:" << endl;
  	cout << "4 for Applying Promo Code:" << endl;
    cout << "5 for Previous Page: " << endl;

    cout << "Which Option:" << endl;
    cin >> s.balance_panel_choice;

    switch (s.balance_panel_choice){
      case 1:
        paying_fee(s);
        break;
      case 2:
        cout << "You paid $" << s.paid_fee << "$" << endl;
        break;
      case 3:
        cout << "You need to pay $" << s.payable_fee << endl;
        break;
      case 4:
        promo_code(s);
        break;
        case 5:
          return management(s);
      default:
        cout << "Invalid Choice!" << endl;
    }



  }
}

void paying_fee(Student &s){

  if (s.payable_fee == 0){
    cout << "You dont have any fee to pay." << endl;
    return;

  }

  cout << "--------------------------" << endl;
  cout << "======= Paying Fee =======" << endl;



  while(true) {
    cout << "How much you want to pay: " << endl;
    cin >> s.current_fee;

    if (s.current_fee > s.payable_fee){
      cout << "ATTENTION! " << endl;
      cout << "You try to pay more then your fee." << endl;
      return;
    }

    s.payable_fee = s.payable_fee - s.current_fee;
    s.paid_fee = s.paid_fee + s.current_fee;

    cout << "Payment Successful: $" << s.current_fee << " You have $" << s.payable_fee << " Left to pay." <<endl;
    cout << "Total " << s.paid_fee << "$ Paid" << endl;


    }
  }

  void promo_code(Student &s){

    cout << "--------------------------" << endl;
    cout << "======= Promo Code =======" << endl;



    while (true){

      cout << "Please Enter Promo Code:" << endl;
      cin >> s.promo_code;

      if (s.promo_code_used == true){
        cout << "Promo code has already been used." << endl;
        break;
      }

      if (s.payable_fee < 0){
        s.payable_fee = 0;
      }

      switch (s.promo_code){
        case 908762:
          s.payable_fee = s.payable_fee - s.polish_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.polish_scholarship  <<endl;
          cout << "School Fee: " << s.payable_fee <<  endl;

          break;
        case 020304 :
          s.payable_fee = s.payable_fee - s.young_success_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.young_success_scholarship  <<endl;
          cout << "School Fee: " << s.payable_fee<<  endl;

          break;
        case 121314:
          s.payable_fee = s.payable_fee - s.success_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.success_scholarship  <<endl;
          cout << "School Fee: " << s.payable_fee  <<  endl;

          break;
        case 020302:
          s.payable_fee = s.payable_fee - s.young_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.young_scholarship <<endl;
          cout << "School Fee: " << s.payable_fee <<  endl;

          break;
        case 332145:
          s.payable_fee = s.payable_fee - s.european_young_success_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.european_young_success_scholarship << endl;
          cout << "School Fee: " << s.payable_fee  <<  endl;

          break;
        case 232122:
          s.payable_fee = s.payable_fee - s.european_success_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.european_success_scholarship << endl;
          cout << "School Fee: " << s.payable_fee  <<  endl;

          break;
        case 020124:
          s.payable_fee = s.payable_fee - s.european_young_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.european_young_scholarship << endl;
          cout << "School Fee: " << s.payable_fee  <<  endl;

          break;
        case 2324356:
          s.payable_fee = s.payable_fee - s.european_scholarship;
          s.promo_code_used = true;
          cout << "Scholarship Activated: " << s.european_scholarship << endl;
          cout << "School Fee: " << s.payable_fee  <<  endl;

          break;
        default:
          cout << "Please enter a valid Promo Code!" << endl;
      }
    }
  }


