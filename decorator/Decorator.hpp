#ifndef DECORATOR_HPP
# define DECORATOR_HPP

# include "VisualComponent.hpp"

class Decorator : public VisualComponent
{
    private:
        VisualComponent *_component;
    public:
        Decorator(VisualComponent *);

        void draw() override;
};

#endif /*DECORATOR_HPP*/