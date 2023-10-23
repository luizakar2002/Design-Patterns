# include "BorderDecorator.hpp"

BorderDecorator::BorderDecorator(VisualComponent *component) : Decorator(component)
{
}

void    BorderDecorator::draw()
{
    Decorator::draw();
    draw_border();
}

void    BorderDecorator::draw_border()
{
    std::cout << "BorderDecorator draw_border()" << std::endl;
}