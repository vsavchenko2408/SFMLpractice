#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({320, 240}), "SFML works!");
    while (window.isOpen())
    {
        // window.clear();
        window.display();
    }
}
