# include "ConcretePrototypeA.hpp"

ConcretePrototypeA::ConcretePrototypeA()
{
    std::cout << "Default ctor" << std::endl;
    _member = "default";
}

ConcretePrototypeA::ConcretePrototypeA(std::string member)
{
    std::cout << "Parametrized ctor" << std::endl;
    _member = member;
}

ConcretePrototypeA::ConcretePrototypeA(ConcretePrototypeA &other)
{
    _member = other._member;
}

Prototype *ConcretePrototypeA::clone()
{
    return new ConcretePrototypeA(*this);
}