#define

class Singleton {

public:
	static Singleton * GetInstance();

private:
	Singleton();
	virtual ~Singleton();

	static Singleton * instance;
};

