#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

#include "song.hpp"

class Playlist
{
    private:
        std::vector<AudioContent> content;
    public:
        Playlist();
        Playlist(const std::initializer_list<AudioContent>& init);
        void addContent(const AudioContent& audio);
        void removeContent(const std::string& title);
        void ShowContents();
        std::vector<AudioContent>::const_iterator begin() const;
        std::vector<AudioContent>::const_iterator end() const;
};

#endif
