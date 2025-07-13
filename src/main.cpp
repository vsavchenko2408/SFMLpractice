#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Main window");
    sf::RectangleShape wall(sf::Vector2f(600, 300));
    wall.setPosition(sf::Vector2f(100, 250));
    wall.setFillColor(sf::Color(80, 40, 50));
    //////////
    sf::RectangleShape door(sf::Vector2f(100, 200));
    door.setPosition(sf::Vector2f(150, 350));
    door.setFillColor(sf::Color::Black);
    //////////
    sf::ConvexShape roof;
    roof.setFillColor(sf::Color(120, 50, 50));
    roof.setPointCount(4);
    roof.setPoint(0, {150, 100});
    roof.setPoint(1, {650, 100});
    roof.setPoint(2, {750, 250});
    roof.setPoint(3, {50, 250});
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(wall);
        window.draw(door);
        window.draw(roof);
        window.display();
    }
}
