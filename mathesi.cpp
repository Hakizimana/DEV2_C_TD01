#include <iostream>
#include <iomanip>
#include "mathesi.h"
#include <cmath>

bool isPrime(unsigned number)
    {
        bool prime = true;
        if(((number % 2 == 0) && number !=2) || number == 1)
        {
            prime = false;
        } else {
            unsigned nb = 3;
            while (nb<=sqrt(number) && prime)
            {
                if(number % nb == 0)
                {
                    prime = false;
                }
                nb+=2;
            }
        }
        return prime;
    }

bool isPalindrome(unsigned long long number, unsigned char base)
    {
        if (base == 0 || base == 1)
        {
            return false;
        }
        unsigned reste;
        unsigned inverse = 0;
        unsigned numberCopy = number;
        while(number != 0 )
        {
            reste = number % base;
            inverse = (inverse*base) + reste;
            number /= base;

        }
        return inverse == numberCopy;
    }

std::pair<int,int> euclidianDivision(int dividend, int divisor)
    {
        if(divisor == 0)
        {
            return std::pair<int, int> {0,0};
        }
        int quotient = dividend/divisor;
        int reste    = dividend%divisor;
        std::pair<int, int> nb(quotient, reste);
        return nb;
    }

unsigned gcd(unsigned a, unsigned b)
    {
//        unsigned temp;
//        if(b>a)
//        {
//            temp = a;
//            a    = b;
//            b    = temp;
//        }
//        if (b == 0)
//        {
//            return a;
//        }
//        while((a%b !=0) && (b!=1))
//        {
//            temp = a;
//            a = b;
//            b = temp%b;
//        }
//        return b;

    if(b==0) {
        return a;
    }
    a = a%b;
    gcd(b,a);
    }
