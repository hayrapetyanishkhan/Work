#include "song.hpp"

AudioContent::AudioContent() : title{"Untitled"},artist{"Unnamed"} {}

AudioContent::AudioContent(const std::string& Title,const std::string& Artist) : title{Title},artist{Artist} {}

AudioContent::AudioContent(const AudioContent& audio) : title{audio.title},artist{audio.artist} {}

AudioContent& AudioContent::operator=(const AudioContent& content)
{
    if(this == &content)
    {
        return *this;
    }
    title = content.title;
    artist = content.artist;
    return *this;
}

std::string AudioContent::getTitle() const
{
    return title;
}

std::string AudioContent::getArtist() const
{
    return artist;
}

void AudioContent::setTitle(const std::string& Title)
{
    title = Title;
}

void AudioContent::setArtist(const std::string& Artist)
{
    artist = Artist;
}

Song::Song() : AudioContent{} {}

Song::Song(const std::string& Title,const std::string& Artist) : AudioContent(Title,Artist) {}

Song::Song(const Song& song) : AudioContent{song} {}

Song& Song::operator=(const Song& song)
{
    if(this == &song)
    {
        return *this;
    }
    setArtist(song.getArtist());
    setTitle(song.getTitle());
    return *this;
}