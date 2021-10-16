#include <iostream>
using namespace std;
int main(void)
{
 double salary, netSalary, finalSalary, tax; 
 int etype, otHrs, otRate;

  // Emp types are 1,2,3  
 //cout << "Enter Employee Type : "
// cin >> salary;

 cout << "Enter Salary : ";
 cin >> salary;

 cout << "Enter Overtime Hours : ";
 cin >> otHrs;
 
 cout << "Enter Overtime Rate : ";
 cin >> otRate;
 
 cout << "Enter tax % : ";
 cin >> tax;

  // switch (salary)
  //{
   //  case 1 :
     //  otRate = 1000;
      //break;
    // case 8 :
      //  otRate = 1500;
    // default :
      //  otRate = 1700;
     // break;
//  }
 
 netSalary = salary + otHrs* otRate;
 taxAmount = (tax/100) * netSalary;
 finalSalary =  netSalary - taxAmount;
 
 cout << "Net Salary is "<< netSalary;
 cout << "After Tax is" << finalSalary;

 return 0;
}

