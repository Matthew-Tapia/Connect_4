//
// Created by Matthew Tapia on 12/2/22.
//

#include "Fonts.h"

std::map<FontsEnum, sf::Font> Fonts::map;

sf::Font &Fonts::getFont(FontsEnum font) {
    load(font);
    return map.at(font);
}

std::string Fonts::getPath(FontsEnum font) {
    switch (font) {

        case ROBOTO:
            return "Fonts/Roboto-Regular.ttf";
        case LAST_FONT:
            return "";
    }
}

void Fonts::load(FontsEnum font) {
    if(!map[font].loadFromFile(getPath(font))){
        exit(65);
    }
}