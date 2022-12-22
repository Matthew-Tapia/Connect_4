//
// Created by Matthew Tapia on 12/5/22.
//

#ifndef CONNECT_4_APPLICATION_H
#define CONNECT_4_APPLICATION_H

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "Component.h"

class Application {
private:
    std::vector<Component*> components;
    sf::VideoMode videoMode;
    std::string title;
    int width, height;

public:
    Application();
    Application(sf::VideoMode videoMode, const std::string& title);

    void run();

    void addComponent(Component& component);

    int getWidth() const;
    int getHeight() const;
};


#endif //CONNECT_4_APPLICATION_H
