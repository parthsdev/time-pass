#include <iostream>
#include <vector>

using namespace std;

class Song {
public:
  Song(string title, string artist, string album, int duration) {
    this->title = title;
    this->artist = artist;
    this->album = album;
    this->duration = duration;
  }

  string getTitle() { return this->title; }
  string getArtist() { return this->artist; }
  string getAlbum() { return this->album; }
  int getDuration() { return this->duration; }

private:
  string title;
  string artist;
  string album;
  int duration;
};

class Playlist {
public:
  Playlist() {}

  void addSong(Song song) { this->songs.push_back(song); }
  void removeSong(Song song) { this->songs.erase(remove(this->songs.begin(), this->songs.end(), song), this->songs.end()); }

  vector<Song> getSongs() { return this->songs; }

private:
  vector<Song> songs;
};

class MP3Player {
public:
  MP3Player() {}

  void addSong(Song song) { this->songList.push_back(song); }
  void removeSong(Song song) { this->songList.erase(remove(this->songList.begin(), this->songList.end(), song), this->songList.end()); }

  void createPlaylist(string name) { this->playlists[name] = new Playlist(); }
  void addSongToPlaylist(string playlistName, Song song) { this->playlists[playlistName]->addSong(song); }
  void removeSongFromPlaylist(string playlistName, Song song) { this->playlists[playlistName]->removeSong(song); }

  vector<Song> getSongList() { return this->songList; }
  vector<Playlist> getPlaylistList() { return this->playlists; }

  void playSong(Song song) {
    cout << "Playing song: " << song.getTitle() << endl;
  }
  void pauseSong() {
    cout << "Pausing song." << endl;
  }
  void stopSong() {
    cout << "Stopping song." << endl;
  }
  Song getCurrentSong() { return this->currentSong; }
  vector<Playlist> getPlaylistList() { return this->playlists; }

private:
  vector<Song> songList;
  vector<Playlist> playlists;
  Song currentSong;
};

int main() {
  MP3Player mp3Player;

  Song song1("Title 1", "Artist 1", "Album 1", 100);
  Song song2("Title 2", "Artist 2", "Album 2", 200);
  Song song3("Title 3", "Artist 3", "Album 3", 300);

  mp3Player.addSong(song1);
  mp3Player.addSong(song2);
  mp3Player.addSong(song3);

  mp3Player.createPlaylist("My Playlist");
  mp3Player.addSongToPlaylist("My Playlist", song1);
  mp3Player.addSongToPlaylist("My Playlist", song2);

  mp3Player.playSong(song1);
  mp3Player.pauseSong();
  mp3Player.stopSong();

  return 0;
}