# include "ScrollDecorator.hpp"

ScrollDecorator::ScrollDecorator(VisualComponent *component) : Decorator(component)
{
}

void    ScrollDecorator::draw()
{
    Decorator::draw();
    ScrollTo();
}

void    ScrollDecorator::ScrollTo()
{
    std::cout << "ScrollDecorator ScrollTo()" << std::endl;
}