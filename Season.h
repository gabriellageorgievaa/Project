#ifndef SEASON_H
#define SEASON_H

#include "Episode.h"

class Season
{
public:
    Season(Episode* episodes, size_t numberOfEpisodes, int length);
    Season(const Season&);
    ~Season();

    // Getters
    const Episode* GetEpisodes() const;
    size_t GetNumberOfEpisodes() const;
    int GetLength() const;

    // Setters
    void SetEpisodes(const Episode* episodes, size_t numberOfEpisodes);
    void SetLength(size_t length);

    void AddEpisode(const Episode&);
    void RemoveEpisodeAtIdx(size_t);
    int SetLength(int) const;

private:
    Episode* episodes;
    size_t numberOfEpisodes;
    int length;
};

#endif