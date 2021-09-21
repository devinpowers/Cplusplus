

#include "MusicPlayer.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	MusicPlayer player, player2;

	player2.Pause();
	player2.Play();
	player2.Stop();
	player2.Play();
	player2.Pause();

	cout << "---" << endl;
	player.Play();
	player.Pause();
	player.Stop();

}

