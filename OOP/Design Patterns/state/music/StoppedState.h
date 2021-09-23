

#ifndef STOPPEDSTATE_H_
#define STOPPEDSTATE_H_

#include "MusicPlayerState.h"
#include "MusicPlayer.h"

class MusicPlayer;

class StoppedState : public MusicPlayerState {
	public:
		StoppedState();
		virtual ~StoppedState();

		virtual void Play(MusicPlayer * player);
};

StoppedState::StoppedState()
: MusicPlayerState(std::string("Stopped")) {}

StoppedState::~StoppedState() {}

void StoppedState::Play(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PLAYING);
}

#endif /* STOPPEDSTATE_H_ */

