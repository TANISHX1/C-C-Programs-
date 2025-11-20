/*
 * out-data.h
 * Purpose: Derived class that extends `data` to gather additional information
 * and print a formatted report.
 * Description: `result` inherits from `data`, calls base chainable methods
 * in its constructor and provides additional formatted output using <iomanip>.
 * Concepts used: inheritance, constructor chaining, method chaining, iomanip
 *                for formatted output, and std::cout.
 */

#include <iostream>
#include "get-data.h"
#include <iomanip>

class result : public data
{
protected:
    std::string Lname, Lplace;
    unsigned short int Lage;
    bool Ladult, Loving_person;

public:
    result()
    {
        std::cout << "Constructor for out-data (RESULT) is called\n";
        Name()->Age_Adult()->address()->PersonULM();
    }

public:
    // getters
    data *LName()
    {
        std::cout << "Enter The name :\t";
        std::cin.ignore();
        getline(std::cin, this->Lname);
        return this;
    }
    data *LPersonULM()
    {
        std::cout << "Does He/she love you ? (1 | 0) :\t";
        std::cin >> this->Loving_person;
        return this;
    }
    data *Laddress()
    {
        std::cout << "Enter the address :\t";
        // std::cin.ignore();
        getline(std::cin, this->Lplace);
        return this;
    }
    data *LAge_Adult()
    {
        std::cout << "Enter the age :\t";
        std::cin >> Lage;
        std::cout << "Is he/she  18+ ! (1 | 0)\t";
        std::cin >> Ladult;
        return this;
    }

    // result

    void print()
    {
        std::cout << std::left;
        std::cout << "=======================================================================================\n";
        std::cout << "\n\t\t\t\t\tYOUR DATA\n\n";
        std::cout << std::setw(40) << "Your Name" << std::setw(5) << ":" << name << std::endl;
        std::cout << std::setw(40) << "Your Age" << std::setw(5) << ":" << age << std::endl;
        std::cout << std::setw(40) << "Adult" << std::setw(5) << ":" << (adult ? "yes" : "no") << std::endl;
        std::cout << std::setw(40) << "Your address" << std::setw(5) << ":" << place << std::endl;
        std::cout << std::setw(40) << "There Exist a person you Love most" << std::setw(5) << ":" << (loving_person ? "Yes" : "No") << std::endl;

        if (this->loving_person)
        {
            std::cout << "-------------------------++++++++++++++++++++++++++++++++++++++++---------------------------";
            std::cout << "\n\t\t\t\tYOUR LOVED ONE'S DATA\n\n";
            std::cout << std::setw(40) << "Name" << std::setw(5) << ":" << Lname << std::endl;
            std::cout << std::setw(40) << "Age" << std::setw(5) << ":" << Lage << std::endl;
            std::cout << std::setw(40) << "Adult" << std::setw(5) << ":" << (Ladult ? "yes" : "no") << std::endl;
            std::cout << std::setw(40) << "Address" << std::setw(5) << ":" << Lplace << std::endl;
            std::cout << std::setw(40) << "Does He/she love you ?" << std::setw(5) << ":" << (Loving_person ? "Yes" : "No") << std::endl;
        }
    }
};
