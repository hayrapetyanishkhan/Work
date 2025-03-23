#ifndef SONG_HPP
#define SONG_HPP

#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

class AudioContent
{
    private:
        std::string title;
        std::string artist;
    public:
        AudioContent();
        AudioContent(const std::string& Title,const std::string& Artist);
        AudioContent(const AudioContent& content);
        AudioContent& operator=(const AudioContent& song);

        std::string getTitle() const;
        std::string getArtist() const;
        void setTitle(const std::string& Title);
        void setArtist(const std::string& Artist);
};

class Song : public AudioContent
{
    public:
        Song();
        Song(const std::string& Title,const std::string& Artist);
        Song(const Song& song);
        Song& operator=(const Song& song);
};

#endif