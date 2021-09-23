

#ifndef PLAYINGSTATE_H_
#define PLAYINGSTATE_H_

#include "MusicPlayerState.h"
#include "MusicPlayer.h"

class MusicPlayer;

class PlayingState : public MusicPlayerState {

	public:
		PlayingState();
		virtual ~PlayingState();

		virtual void Pause(MusicPlayer * player);
		virtual void Stop(MusicPlayer * player);
};

PlayingState::PlayingState() : MusicPlayerState(std::string("Playing")) {}

PlayingState::~PlayingState() {}

void PlayingState::Pause(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PAUSED);
}

void PlayingState::Stop(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_STOPPED);
}

#endif /* PLAYINGSTATE_H_ */


