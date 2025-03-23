#include "playlist.hpp"

Playlist::Playlist(){}

Playlist::Playlist(const std::initializer_list<AudioContent>& init)
{
    if(init.size() == 0)
    {
        return;
    }
    content.reserve(init.size());
    for(const auto& x : init)
    {
        content.push_back(x);
    }
}

void Playlist::addContent(const AudioContent& audio)
{
    content.push_back(audio);
}

void Playlist::removeContent(const std::string& Title)
{
    for(auto x = begin() ; x != end() ; ++x)
    {
        if((*x).getTitle() == Title)
        {
            content.erase(x);
            std::cout << "The song " << Title << " is removed" << std::endl;
            return;
        }
    }
    throw std::runtime_error{"The " + Title + " is not on this playlist"};
}

void Playlist::ShowContents()
{
    for(auto x : content)
    {
        std::cout << "Title : " << x.getTitle() << " , Artist : " << x.getArtist() << std::endl;
    }
}

std::vector<AudioContent>::const_iterator Playlist::begin() const
{
    return content.cbegin();
}
std::vector<AudioContent>::const_iterator Playlist::end() const
{
    return content.cend();
}
