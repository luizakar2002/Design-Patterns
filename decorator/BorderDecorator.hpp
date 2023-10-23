#ifndef BORDER_DECORATOR_HPP
# define BORDER_DECORATOR_HPP

# include "Decorator.hpp"

class BorderDecorator : public Decorator
{
    private:
        int     _border_width;
        void    draw_border();
    public:
        BorderDecorator(VisualComponent *);

        void    draw() override;
};

#endif /*BORDER_DECORATOR_HPP*/