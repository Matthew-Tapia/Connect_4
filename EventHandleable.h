//
// Created by Matthew Tapia on 12/5/22.
//

#ifndef CONNECT_4_EVENTHANDLEABLE_H
#define CONNECT_4_EVENTHANDLEABLE_H

#include "SFML/Graphics.hpp"

class EventHandleable{
public:
    virtual void eventHandler(sf::RenderWindow& window, sf::Event& event) = 0;
};

#endif //CONNECT_4_EVENTHANDLEABLE_H
