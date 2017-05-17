#ifndef PERCEPTION_H
#define PERCEPTION_H

#include "Season.h"


class Perception
{
public:
    Perception(unsigned int hate, unsigned int attraction, bool good);
    Perception(Perception&);
    ~Perception();

    //Getters
    unsigned int GetHate() const;
    unsigned int GetAttraction() const;
    bool IsGood() const;

    //Setters
    void SetHate(unsigned int);
    void SetAttraction(unsigned int);
    void SetGood(bool);

private:
    unsigned int hate;
    unsigned int attraction;
    bool good;

};

#endif
