#include "SFML/Graphics.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode({200, 600}), "Main window");
    sf::CircleShape red(90, 90);
    red.move(sf::Vector2f(10, 10));
    red.setFillColor(sf::Color::Red);
    sf::CircleShape yellow(90, 90);
    yellow.move(sf::Vector2f(10, 210));
    yellow.setFillColor(sf::Color::Yellow);
    sf::CircleShape green(90, 90);
    green.move(sf::Vector2f(10, 410));
    green.setFillColor(sf::Color::Green);
    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear(sf::Color::Black);
        window.draw(red);
        window.display();
        sf::sleep(std::chrono::milliseconds(1000));
        window.clear(sf::Color::Black);
        window.draw(yellow);
        window.display();
        sf::sleep(std::chrono::milliseconds(1000));
        window.clear(sf::Color::Black);
        window.draw(green);
        window.display();
        sf::sleep(std::chrono::milliseconds(1000));
    }
}
