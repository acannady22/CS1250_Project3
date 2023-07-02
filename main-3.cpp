/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// This program calculates a end users monthly payments given their 
// loan amount, monthly interest rate, and number of payments. 
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{
    
   // Variables ... use double? or float?
   double loan_amount, // loan amount (ask)
        monthly_rate , // monthly interest rate (ask)
        num_payments, //number of payments (ask)
        paid_back, 
        interest_paid, 
        monthly_payment;
    
    
    string name;
    
        
   // set output formatting for numbers
   // setprecision.. 
   // showpoint.. shows dp
   cout << setprecision(2) << fixed << right << showpoint << endl;
    
    // Ask user name and questions for calculations
    cout << "Hi! What is your first and last name? ";
    //cin >> name; //or 
    getline(cin, name);
    cout << "What is your loan amount?: "; 
    cin >> loan_amount;
    cout << "What is your monthly interest rate? (type decimal):";
    cin >> monthly_rate;
    cout << "What is your number of paments?: ";
    cin >> num_payments;
    
    // Monthly Payment equation
        monthly_payment = (monthly_rate * pow(1 + monthly_rate, num_payments)) / (pow(1 + monthly_rate, num_payments) - 1) * loan_amount;
        
    
    // equations
        //paid_back = loan_amount + interest_paid, // amount paid back (calculate)
        //interest_paid = (monthly_payment * monthly_rate) * num_payments, // interest paid (caclulate) or loan_amount - paid_back
        interest_paid = (num_payments * monthly_payment) - loan_amount,
        paid_back = loan_amount + interest_paid, // amount paid back (calculate)
        monthly_rate *= 100,
        
        
    // Monthly Payment equation
        //monthly_payment = (( monthly_rate) * pow(1 + (monthly_rate), num_payments) / (pow(1 + (monthly_rate), num_payments)) - 1) * loan_amount;
        
    
    // add 8 spaces in between words and numbers + align numbers on left
    // setw(8) + right manipulator
    cout << "Loan Amount: $" << setw(2) << loan_amount << endl;
    cout << "Monthly Interest Rate: " << setw(2) << monthly_rate << "%" << endl;
    cout << "Number of Payments: " << setw(2) << num_payments << endl;
    cout << "Monthly Payment: $" << setw(2) << monthly_payment << endl;
    cout << "Amount Paid Back: $" << setw(2) << paid_back << endl;
    cout << "Interest Paid: $" << setw(2) << interest_paid << endl;
    
    // additional sentence added to problem #19 for project
    cout << name << " paid a total interest in the amount of $" << interest_paid;
    cout << " in " << num_payments << " months." << "\n";

    return 0;
}
