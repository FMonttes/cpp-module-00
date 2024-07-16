#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <map>
#include <functional>


class Harl {

public:
    Harl();
    ~Harl();
    void complain(std::string level);
private:
    void debug();
    void info();
    void error();
    void warning();
};

#endif // HARL_HPP