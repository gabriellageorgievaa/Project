#include "Perception.h"
#include <cstring>

#if __cplusplus < 201103L
#ifndef nullptr
#define nullptr NULL
#endif // nullptr
#endif // __cplusplus < 201103L

Perception::Perception(unsigned int hate, unsigned int attraction, bool good)
{
     SetHate(hate);
     SetAttraction(attraction);
     SetGood(good);
}

Perception::Perception(Perception& perception)
{
    SetHate(perception.hate);
    SetAttraction(perception.attraction);
    SetGood(perception.good);

}
