# include "TextView.hpp"
# include "ScrollDecorator.hpp"
# include "BorderDecorator.hpp"

int main()
{
    VisualComponent *text_view = new TextView();

    VisualComponent *scroll_dec = new ScrollDecorator(text_view);

    VisualComponent *border_dec = new BorderDecorator(scroll_dec);

    std::cout << "***Drawing pure component***" << std::endl;
    text_view->draw();

    std::cout << "\n***Drawing component after decorating it with scroll functionality***" << std::endl;
    scroll_dec->draw();

    std::cout << "\n***Drawing component after decorating it with another functionality [BorderWidth]***" << std::endl;
    border_dec->draw();

}