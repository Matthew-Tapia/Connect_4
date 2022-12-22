//
// Created by Matthew Tapia on 12/5/22.
//

#include "Application.h"
#include "Constants.h"

Application::Application() : Application({2560, 1600, 32}, "Application"){

}

Application::Application(sf::VideoMode videoMode, const std::string &title) : videoMode(videoMode), title(title){
    width = videoMode.width;
    height = videoMode.height;
}

void Application::run() {
    sf::RenderWindow window(videoMode, title);
    window.setFramerateLimit(60);

    while(window.isOpen()){
        sf::Event event;

        while (window.pollEvent(event)){
            if(event.type == sf::Event::Closed){
                window.close();
            }

            for(EventHandleable *c : components){
                c -> eventHandler(window, event);
            }
        }

        window.clear(Constants::BACKGROUND_COLOR);

        for(sf::Drawable* c : components){
            window.draw(*c);
        }

        window.display();
    }
}

void Application::addComponent(Component &component) {
    components.push_back(&component);
}

int Application::getWidth() const {
    return width;
}

int Application::getHeight() const {
    return height;
}


