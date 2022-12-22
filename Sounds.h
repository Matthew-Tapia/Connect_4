//
// Created by Matthew Tapia on 12/3/22.
//

#ifndef CONNECT_4_SOUNDS_H
#define CONNECT_4_SOUNDS_H

#include <map>
#include <SFML/Audio.hpp>
#include "SoundsEnum.h"

class Sounds {
public:
    static sf::SoundBuffer& getSound(SoundsEnum sound);

private:
    static std::map<SoundsEnum, sf::SoundBuffer> map;
    static void load(SoundsEnum sound);
    static std::string getPath(SoundsEnum sound);
};


#endif //CONNECT_4_SOUNDS_H
