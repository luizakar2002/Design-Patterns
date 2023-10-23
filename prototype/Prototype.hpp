#ifndef PROTOTYPE_HPP
# define PROTOTYPE_HPP

class Prototype
{
    public:
        virtual Prototype *clone() = 0;
};

#endif /*PROTOTYPE_HPP*/