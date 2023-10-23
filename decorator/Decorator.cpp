# include "Decorator.hpp"

Decorator::Decorator(VisualComponent *component)
{
    _component = component;
}

void    Decorator::draw()
{
    _component->draw();
}