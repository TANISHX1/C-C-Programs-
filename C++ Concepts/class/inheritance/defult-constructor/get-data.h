/*
 * get-data.h
 * Purpose: Collects user input values with chainable methods.
 * Description: Provides a `data` class where each input method returns
 * a pointer to `this` to allow chained calls (fluent interface). Shows
 * use of protected members, std::string, getline and basic I/O.
 * Concepts used: method chaining (returning `this`), access specifiers
 *                (protected), std::string, and I/O.
 */

#include <iostream>
#include <string>
class data
{
protected:
    std::string name, place;
    unsigned short int age;
    bool adult, loving_person;

    data()
    {
        std::cout << "constructor for get-data is called \n";
    }

public:
    // getters
    data *Name()
    {
        std::cout << "Enter your name :\t";
        // std::cin.ignore();
        getline(std::cin, this->name);
        return this;
    }
    data *PersonULM()
    {
        std::cout << "Does there Exist a person you love most(1 | 0) :\t";
        std::cin >> this->loving_person;
        return this;
    }
    data *address()
    {
        std::cout << "Enter your address :\t ";
        std::cin.ignore();
        getline(std::cin, this->place);
        return this;
    }
    data *Age_Adult()
    {
        std::cout << "Enter your age :\t";
        std::cin >> age;
        std::cout << "Are You 18+ ! (1 | 0)\t";
        std::cin >> adult;
        return this;
    }
};
