//
// Created by Matthew Tapia on 12/1/22.
//

#ifndef CONNECT_4_MOUSEEVENTS_H
#define CONNECT_4_MOUSEEVENTS_H

#include <SFML/Graphics.hpp>

class MouseEvents {
public:
    template<class T>
    static bool isHovered(const T& Obj, const sf::RenderWindow& window);

    template<class T>
    static bool isClicked(const T& Obj, const sf::RenderWindow& window);

    template<class T>
    static bool isNotClicked(const T& Obj, const sf::RenderWindow& window);
};

#include "MouseEvents.cpp"

#endif //CONNECT_4_MOUSEEVENTS_H
