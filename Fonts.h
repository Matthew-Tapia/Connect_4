//
// Created by Matthew Tapia on 12/2/22.
//

#ifndef CONNECT_4_FONTS_H
#define CONNECT_4_FONTS_H


#include <SFML/Graphics.hpp>
#include <map>
#include "FontsEnum.h"

class Fonts {
public:
    static sf::Font& getFont(FontsEnum font);

private:
    static std::map<FontsEnum, sf::Font> map;
    static void load(FontsEnum font);
    static std::string getPath(FontsEnum font);
};


#endif //CONNECT_4_FONTS_H
