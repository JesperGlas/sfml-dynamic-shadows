#ifndef __DEMO_HPP__
#define __DEMO_HPP__

#include "SFML/Graphics.hpp"

class Demo
{
    private:
        sf::Window m_window;

    public:
        Demo() {};

        int init();
        int run();
};

#endif