//
// Created by Matthew Tapia on 12/5/22.
//

#ifndef CONNECT_4_COMPONENT_H
#define CONNECT_4_COMPONENT_H

#include <SFML/Graphics.hpp>
#include "EventHandleable.h"
#include "Stateable.h"

class Component : public sf::Drawable, public EventHandleable, public Stateable, public sf::Transformable{

};

#endif //CONNECT_4_COMPONENT_H
