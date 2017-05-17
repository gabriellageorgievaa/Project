#ifndef EPISODE_H
#define EPISODE_H

#include "Character.h"

class Episode
{
public:
    Episode(Character* characters, size_t numberOfCharacters, int length);
    Episode(const Episode&);
    ~Episode();

    // Getters
    const Character* GetCharacters() const;
    size_t GetNumberOfCharacters() const;
    int GetLength() const;

    // Setters
    void SetCharacters(const Character* characters, size_t numberOfCharacters);
    void SetLength(size_t length);

    void AddCharacter(const Character&);
    void RemoveCharacterAtIdx(size_t);
    int SetLength(int) const;

private:
    Character* characters;
    size_t numberOfCharacters;
    int length;
};

#endif