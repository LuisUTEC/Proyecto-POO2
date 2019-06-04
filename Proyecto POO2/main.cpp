#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "SFML works!",sf::Style::Fullscreen);
    sf::CircleShape Casa_1_amarillo(25.f);
    Casa_1_amarillo.setFillColor(sf::Color(150, 50, 250));

    Casa_1_amarillo.setOutlineThickness(10.f);
    Casa_1_amarillo.setOutlineColor(sf::Color(250, 150, 100));
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::White);
        window.draw(Casa_1_amarillo);
        window.display();
    }
    return 0;
}
