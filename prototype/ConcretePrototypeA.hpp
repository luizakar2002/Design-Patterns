#ifndef CONCRETEPROTOTYPEA_HPP
# define CONCRETEPROTOTYPEA_HPP

# include <iostream>

# include "Prototype.hpp"

class ConcretePrototypeA : public Prototype
{
    private:
        std::string _member;
    public:
        ConcretePrototypeA();
        ConcretePrototypeA(ConcretePrototypeA &);
        ConcretePrototypeA(std::string);

        Prototype *clone() override;

};

#endif /*CONCRETEPROTOTYPEA_HPP*/