/*••• P3.8
 Write a program that computes taxes for the following schedule:
 
 If your status is Single and    but not over        the tax is     of the amount over
if the taxable income is over
        $0                          $8,000              10%             $0
        $8,000                      $32,000             $800 + 15%      $8,000
        $32,000                                         $4,400 + 25%    $32,000
 If your status is Married and    but not over        the tax is      of the amount over
 if the taxable income is over
        $0                          $16,000             10%             $0
        $16,000                     $64,000             $1,600 + 15%    $16,000
        $64,000                                         $8,800 + 25%    $64,000
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Enter status followed by income: ";\
    string status;
    float income, tax = 0;
    cin >> status >> income;
    
    if (status == "S" || status == "s")
    {
        if (income < 8000)
        {
            tax = 0.01;
        }
        else if (income < 32000)
        {
            tax = (income - 8000) * 0.015 + 800;
        }
        else
        {
            tax = (income - 32000) * 0.025 + 4400;
        }
    }
    else
    {
        if (income < 16000)
        {
            tax = 0.01;
        }
        else if (income < 64000)
        {
            tax = (income - 16000) * 0.015 + 1600;
        }
        else
        {
            tax = (income - 64000) * 0.025 + 8800;
        }
    }
    cout << "Income tax = " << tax << "\n";
    
}
