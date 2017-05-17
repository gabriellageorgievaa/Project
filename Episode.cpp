#include "Episode.h"
#include <cstring>

#if __cplusplus < 201103L
#ifndef nullptr
#define nullptr NULL
#endif // nullptr
#endif // __cplusplus < 201103L

Episode::Episode(Character* characters, size_t numberOfCharacters, int length)
{
    SetCharacters(characters, numberOfCharacters);
    SetLength(length);
}

Episode::Episode(const Episode& episode)
{
    SetCharacters(episode.characters, episode.numberOfCharacters);
    SetLength(episode.length);
}

Episode::~Episode()
{
    delete[] characters;
}

const Character* Episode::GetCharacters() const
{
    return characters;
}

size_t Episode::GetNumberOfCharacters() const
{
    return numberOfCharacters;
}

int Episode::GetLength() const
{
    return length;
}

void Episode::SetEpisodes(const Character* characters, size_t numberOfCharacters)
{
    delete[] characters;

    if (characters != nullptr && numberOfCharacters > 0)
    {
        this.numberOfCharacters = numberOfCharacters;
        this.characters = new Character[numberOfCharacters];
        for (size_t i = 0; i < numberOfCharacters; i++)
        {
            this.characters[i] = characters[i];
        }
    }
    else
    {
        this.characters = nullptr;
        this.numberOfCharacters = 0;
    }
}

void Episode::AddCharacter(const Character& character)
{
    characters[numberOfCharacters] = character;
    numberOfCharacters++;
}

void Episode::RemoveCharacterAtIdx(size_t idx)
{
    if (idx < numberOfCharacters)
    {
        characters[idx] = Character();
    }
}
