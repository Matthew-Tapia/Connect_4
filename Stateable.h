//
// Created by Matthew Tapia on 12/2/22.
//

#ifndef CONNECT_4_STATEABLE_H
#define CONNECT_4_STATEABLE_H


#include <map>
#include "StatesEnum.h"

class Stateable {
public:
    Stateable();

    bool checkState(StatesEnum state) const;
    void enableState(StatesEnum state);
    void disableState(StatesEnum state);
    void toggleState(StatesEnum state);
    void setState(StatesEnum state, bool value);

private:
    std::map<StatesEnum, bool> map;

    void load();
};


#endif //CONNECT_4_STATEABLE_H
