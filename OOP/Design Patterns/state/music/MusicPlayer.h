

#ifndef MUSICPLAYER_H_
#define MUSICPLAYER_H_

class MusicPlayerState;

class MusicPlayer {

	private:
		MusicPlayerState * m_pState;

	public:
		enum State // Enum is a user defined data type 
		{
			ST_STOPPED, ST_PLAYING, ST_PAUSED
		};

		MusicPlayer();
		virtual ~MusicPlayer(); // Deconstructor

		void Play();
		void Pause();
		void Stop();

		void SetState(State state);

};

#endif /* MUSICPLAYER_H_ */


