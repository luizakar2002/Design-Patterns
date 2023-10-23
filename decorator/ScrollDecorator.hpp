#ifndef SCROLL_DECORATOR_HPP
# define SCROLL_DECORATOR_HPP

# include "Decorator.hpp"

class ScrollDecorator : public Decorator
{
    private:
        int     _scrollPosition;
        void    ScrollTo();
    public:
        ScrollDecorator(VisualComponent *);

        void    draw() override;
};

#endif /*SCROLL_DECORATOR_HPP*/