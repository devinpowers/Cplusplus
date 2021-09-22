

#ifndef PAUSEDSTATE_H_
#define PAUSEDSTATE_H_

#include "MusicPlayerState.h"
#include "MusicPlayer.h"

class MusicPlayer;

class PausedState : public MusicPlayerState {
public:
	PausedState();
	virtual ~PausedState();

	virtual void Play(MusicPlayer * player);
	virtual void Stop(MusicPlayer * player);
};


PausedState::PausedState()
: MusicPlayerState(std::string("Paused")) {
}

PausedState::~PausedState() {
}

void PausedState::Play(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_PLAYING);
}

void PausedState::Stop(MusicPlayer * player)
{
	player->SetState(MusicPlayer::ST_STOPPED);
}

#endif /* PAUSEDSTATE_H_ */
