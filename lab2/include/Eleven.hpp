#pragma once
#include <iostream>
#include <cstring>
#include <algorithm>

class Eleven
{
public:
    Eleven();                                              //* Default constructor
    size_t getSize() const;
    unsigned char *getNumber() const;

    Eleven(const size_t &n, unsigned char t = 0);          //* Fill constructor
    Eleven(const std::initializer_list<unsigned char> &t); //* Initializer list constructor
    Eleven(const std::string t);                           //* Copy string constructor
    Eleven(const Eleven &other);                           //* Copy constructor
    Eleven(Eleven &&other) noexcept;                       //* Move constructor

    std::ostream &print(std::ostream &os);

    Eleven operator=(const Eleven &other);                 //* Assignment operator (=)
    Eleven operator+(const Eleven &other) const;           //* Addition operator (+)
    Eleven operator-(const Eleven &other) const;           //* Substraction operator (-)
    bool operator==(const Eleven &other) const;            //* Equal operator (==)
    bool operator!=(const Eleven &other) const;            //* Not equal operator (!=)
    bool operator<(const Eleven &other) const;             //* Less operator (<)
    bool operator<=(const Eleven &other) const;            //* Less or equal operator (<=)
    bool operator>(const Eleven other) const;              //* Greater operator (>)
    bool operator>=(const Eleven other) const;             //* Greater or equal operator (>=)

    ~Eleven() noexcept; //* Destructor
private:
    size_t size;
    unsigned char *number;
};

bool isElevenDigit(const char &c);