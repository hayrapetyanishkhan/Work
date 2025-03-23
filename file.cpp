#include "song.cpp"
#include "playlist.cpp"

int  main()
{
    Song song1{"luther","Kendrick Lamar & SZA"};
    Song song2{"APT","ROSE & Bruno Mars"};
    Song song3{"Mockingbird","Eminem"};
    Song song4{"Skyfall","Adele"};

    Playlist myLibrary = {song2,song3,song4};
    Playlist myTop;

    myTop.addContent(song1);
    myLibrary.ShowContents();
    
    try
    {
        myLibrary.removeContent(song1.getTitle());
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        myLibrary.removeContent(song2.getTitle());
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }


    myLibrary.ShowContents();
    

    return 0;
}