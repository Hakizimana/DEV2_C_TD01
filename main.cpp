#include <iostream>
#include <iomanip>
#include "mathesi.h"

using namespace std;

int main()
{
    cout << "Labo C/C++: TD01" << endl;
    cout << "================" << endl;

    // Exercice 1.2
    //    cout << "Les nombres premiers entre 200 et 349 :" << endl;

    //    for(unsigned nb=200, cpt=0;nb<=349;nb++)
    //    {
    //        // cout.setf(ios::showbase);
    //        if(isPrime(nb))
    //        {
    //            cout << setw(4)<< nb;
    //        } else {
    //            cout << setw(4)<< ".";
    //        }

    //        cpt++;
    //        if(cpt % 10 == 0)
    //        {
    //            cout << endl;
    //        }
    //    }

    // Exercice 1.4
    //    cout << "Les nombres palindromes en base 10 entre 0 et 2015 :" << endl;

    //    for(unsigned nb=0, cpt=1;nb<=2015;nb++)
    //        {
    //            // cout.setf(ios::showbase);
    //            if(isPalindrome(nb))
    //            {
    //                cout << setw(5)<< nb;
    //                cpt++;
    //            }
    //            if(cpt % 11 == 0)
    //            {
    //                cout << endl;
    //                cpt = 1;
    //            }
    //        }


    // Exercice 1.5
    //    cout << "Les nombres palindromes en base 8 entre 0 et 500 :" << endl;
    //        for(unsigned nb=0, cpt=1;nb<=500;nb++)
    //            {

    //                if(isPalindrome(nb, 8))
    //                {
    //                    cout.setf(ios::showbase);
    //                    cout <<setw(5) << dec<< nb <<" ["<<setw(4)<< oct << nb << "]";
    //                    cpt++;
    //                }
    //                if(cpt % 6 == 0)
    //                {
    //                    cout << endl;
    //                    cpt = 1;
    //                }
    //            }
    //        cout << endl;


    // Exercice 1.6
    //        cout << "Les nombres palindromes en base 16 entre 0 et 1000 :" << endl;
    //            for(unsigned nb=0, cpt=1;nb<=1000;nb++)
    //                {

    //                    if(isPalindrome(nb, 16))
    //                    {
    //                        cout.setf(ios::showbase);
    //                        cout <<setw(5) << dec<< nb <<" ["<<setw(5)<< hex << nb << "]";
    //                        cpt++;
    //                    }
    //                    if(cpt % 6 == 0)
    //                    {
    //                        cout << endl;
    //                        cpt = 1;
    //                    }
    //                }
    //            cout << endl;


    //Exercice 1.8
//    int dividend = 32;
//    int quotient;
//    int reste;
//    for (int divisor = 0; divisor < dividend; divisor++ )
//    {
//        quotient = euclidianDivision(dividend, divisor).first;
//        reste    = euclidianDivision(dividend, divisor).second;
//        cout << dividend << " = " << setw(2) << quotient << setw(
//                 2) << " * " << setw(2) << divisor << " + " << setw(
//                 2) << reste << endl;
//    }


    // Exercice 1.10
    //    unsigned a = 423;
    //    unsigned b = 135;

    //    for(int cpt1 = 0; cpt1<=5; cpt1++, a +=3)
    //    {
    //        for(int cpt2 = 0; cpt2<=2; cpt2++, b -=5)
    //        {
    //            if(cpt2!=2)
    //            {
    //                cout << "gcd("<< a <<","<<b<<")" <<" = "<<setw(2) <<gcd(a,b)<<setw(3)<<" | "<< setw(3);
    //            } else
    //            {
    //                cout << "gcd("<< a <<","<<b<<")" <<" = "<<setw(2) <<gcd(a,b)<< setw(3);
    //            }

    //        }
    //        b = 135;
    //        cout << endl;
    //    }
   }
