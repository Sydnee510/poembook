#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double hours, internetCharge, textCharge, totalCharge;
  int package, message;

  //get input
  cout << "Which internet package did you subscribe (1, 2, or 3): ";
  cin >> package;

  //input validation
  while (package != 1 && package != 2 && package != 3)
  {
    cout << "Invalid package. Package can only be 1, 2, or 3" << endl;
    cout << "Which internet package did you subscribe (1, 2, or 3): ";
    cin >> package;
  }

  cout << "Enter the number of hours used: ";
  cin >> hours;

  //input validation for hours 
  /*
    negative hours, hours over the maximum hours for a month
    second validation needs year and month.

    Extra credit part:
In the sample program, our input validation for hours only checks negative hour. It doesn’t check if the hours used is over the maximum hours for a month. Please add this part to the input validation of hours.
Two more input item are needed: year, and month
Step 1: ask the month
Step 2: validate the month (1-12)
Step 3: check if the month is 1, 3, 5, 7, 8, 10, 12. These months has 31 days
Step 4: check is the month is 4, 6, 9, 11. These months has 30 days
Step 5: if the month is 2, ask the year
Step 6: validate the year
Step 7: if the year is a leap year, then feb has 29 days, otherwise 28 days
Step 8: calculate the maxHours for the month 

  */
  while (hours <= 0 )
  {
    cout << "Hours could not be negative" << endl;
    cout << "Enter the number of hours used: ";
    cin >> hours;
  }

  cout << "Enter the number of messages sent: ";
  cin >> message;

  while (message < 0)
  {
    cout << "Number of messages can not be negative" << endl;
    cout << "Enter the number of messages sent: ";
    cin >> message;
  }
  
  //if statement to decide package
  if (package == 1)
  {
      if (hours > 10)
        internetCharge = 9.99 + 2 * (hours - 10);
      else
        internetCharge = 9.99;
  }
  else if (package == 2)
  {
      if (hours > 20)
        internetCharge = 19.99 + 1 * (hours - 20);
      else
        internetCharge = 19.99;
  }
  else
    internetCharge = 49.99;

  textCharge = 0.05 * message;

  totalCharge = internetCharge + textCharge;

  //display
  cout << setprecision(2) << fixed << endl;
  cout <<"The internet charge is ";
  cout << setw(8) << internetCharge << endl;
  cout << "The text charge is ";
  cout << setw(8) << textCharge << endl;
  cout << "The total charge is ";
  cout << setw(8) << totalCharge << endl;

  return 0;
}