#include <iostream>

#include "demo.hpp"

int Demo::init()
{
    this->m_window.create(sf::VideoMode(800, 600), "Demo");

    return true;
}

int Demo::run()
{
    while (this->m_window.isOpen())
    {
        sf::Event event;
        while (m_window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                m_window.close();
        }
    }

    return 0;
}