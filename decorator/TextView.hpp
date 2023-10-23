#ifndef TEXT_VIEW_HPP
# define TEXT_VIEW_HPP

# include "VisualComponent.hpp"

class TextView : public VisualComponent
{
    public:
        void draw() override;
};

#endif /*TEXT_VIEW_HPP*/