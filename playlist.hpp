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
        void addContent(const AudioContent& song);
        void removeContent(const std::string& title);
        void ShowContents();
};

#endif
