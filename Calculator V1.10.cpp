
// C++ Program to implement a Simple Calculator
// using if-else statements
//Adding more operators and trying a diffrent UI
//Still only two variables tho
//Making modules to make the code neater and more readable
#include <bits/stdc++.h>
using namespace std;

string inputf(){
  cout << "Operators available :" <<  endl;
  cout << "Addition             : +" << endl;
  cout << "Substraction         : -" << endl;
  cout << "Multiplication       : *" << endl;
  cout << "Division             : /" << endl;
  cout << "Modulus              : %" << endl;
  cout << "Absolute Value       : ||" << endl;
  cout << "Exponential Function : **" << endl;
  cout << "Square Root : sqrt" << endl << endl << endl;  
  cout << "Enter the operator to be executed : ";
  string o;
  cin >> o;
  cout << endl;
  return o;
}

void op_add(){
  cout << "Enter the two numbers to add :";
  int n1 = 0; cin >> n1;
  int n2 = 0; cin >> n2;
  cout << endl;
  cout << "The sum of " << n1 << " and " << n2 << " is " << n1 + n2;
}

void op_sub(){
  cout << "Enter the two numbers to substract :";
  int n1 = 0; cin >> n1;
  int n2 = 0; cin >> n2;
  cout << endl;
  cout << "The diffrence of " << n1 << " and " << n2 << " is " << n1 - n2 << endl;
}

void op_mult(){
  cout << "Enter the two numbers to multiply :";
  int n1 = 0; cin >> n1;
  int n2 = 0; cin >> n2;
  cout << endl;
  cout << "The product of " << n1 << " and " << n2 << " is " << n1 * n2 << endl;
}

void op_div(){
  cout << "Enter the two numbers to divide :";
  int n1 = 0; cin >> n1;
  int n2 = 0; cin >> n2;
  cout << endl;
  if(n1%n2==0){
    cout << "The quotient of " << n1 << " and " << n2 << " is " << n1 / n2 << endl;
  }
  else{
    cout << "The quotient of " << n1 << " and " << n2 << " is " << n1 / n2 << endl;
    cout << "The remainder is "<< n1 % n2 << endl;
  }
}

void op_mod(){
  cout << "Enter the two numbers to find the remainder :";
  int n1 = 0; cin >> n1;
  int n2 = 0; cin >> n2;
  cout << endl;
  cout << "The remainder of " << n1 << " and " << n2 << " is " << n1 % n2;
}

void op_abs_value(){
  cout << "Enter the number to find its absolute value :";
  int n1 = 0; cin >> n1; 
  cout << endl;
  if(n1<0) cout << "The absolute value of " << n1 << " is " << n1*-1 << endl;
  else cout << "The absolute value of " << n1 << " is " << n1 << endl;
}

void op_exp(){
  cout << "Enter the number that would be the base :";
  int n1 = 0; cin >> n1;
  cout << endl;
  cout << "Enter the number that would be the power :";
  int n2 = 0; cin >> n2;
  cout << endl;
  cout << "The exponential function on " << n1 << " and " << n2 << " is " << pow(n1,n2) << endl;
}

void op_sqrt(){
  cout << "Enter the number to find the square root : ";
  float n1 = 0; cin >> n1;
  cout << endl;
  cout << "The square root of "<< n1 << " is " << sqrt(n1) << endl;
}

void call_operator_function(string ch){
  if(ch=="+") op_add();
  else if(ch=="-") op_sub();
  else if(ch=="*") op_mult();
  else if(ch=="/") op_div();
  else if(ch=="%") op_mod();
  else if(ch=="||") op_abs_value();
  else if(ch=="**") op_exp();
  else if(ch=="sqrt") op_sqrt();
  else{
    cout << "Enter a valid operator" << endl;
  }
}


int main(){
  string opp = inputf();
  call_operator_function(opp);
}


// Turned previous operators + / - / * / /
// Added new operators as modules
// New operators 
// % - modulus
// || - absolute value
// ** - exponential
// sqrt - square root




// next version will try to add a loop
// maybe a one iteration long memory 
// or a vector for a longer memory ...... but how to call back in vector?
