

#include "MusicPlayer.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
	MusicPlayer player, player2, player69;

	player2.Pause();
	player2.Play();
	player2.Stop();
	player2.Play();

	player2.Play();
	player2.Pause();

	cout << "---" << endl;
	player.Play();
	player.Pause();
	player.Stop();

	cout << "---" << endl;

	player69.Play();
	player69.Pause();
	player69.Stop();

	cout << "_______________ " << endl;

}






