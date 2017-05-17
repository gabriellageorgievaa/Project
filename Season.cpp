#include "Season.h"
#include <cstring>

#if __cplusplus < 201103L
#ifndef nullptr
#define nullptr NULL
#endif // nullptr
#endif // __cplusplus < 201103L

Season::Season(Episode* episodes, size_t numberOfEpisodes, int length)
{
    SetEpisodes(episodes, numberOfEpisodes);
    SetLength(length);
}

Season::Season(const Season& season)
{
    SetEpisodes(season.episodes, season.numberOfEpisodes);
    SetLength(season.length);
}

Season::~Season()
{
    delete[] episodes;
}

const Episode* Season::GetEpisodes() const
{
    return episodes;
}

size_t Season::GetNumberOfEpisodes() const
{
    return numberOfEpisodes;
}

int Season::GetLength() const
{
    return length;
}

void Season::SetSeasons(const Episode* episodes, size_t numberOfEpisodes)
{
    delete[] episodes;

    if (episodes != nullptr && numberOfEpisodes > 0)
    {
        this.numberOfEpisodes = numberOfEpisodes;
        this.episodes = new Episode[numberOfEpisodes];
        for (size_t i = 0; i < numberOfEpisodes; i++)
        {
            this.episodes[i] = episodes[i];
        }
    }
    else
    {
        this.episodes = nullptr;
        this.numberOfEpisodes = 0;
    }
}

void Season::AddCharacter(const Character& character)
{
    characters[numberOfCharacters] = character;
    numberOfCharacters++;
}

void Season::RemoveCharacterAtIdx(size_t idx)
{
    if (idx < numberOfCharacters)
    {
        characters[idx] = Character();
    }
}
