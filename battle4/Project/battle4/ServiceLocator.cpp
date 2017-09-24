#include <iostream>
using namespace std;

class Food
{
public:
	virtual ~Food() {}

	virtual void eatFood(int foodID) = 0;
	virtual void stopFood(int foodID) = 0;
	virtual void stopAllFood() = 0;

private:

};

class FastFood: public Food
{
public:
  virtual void eatFood(int foodID) { /* Do nothing. */ }
  virtual void stopFood(int foodID) { /* Do nothing. */ }
  virtual void stopAllFood()        { /* Do nothing. */ }
};

class LoggedSound : public Food
{
public:
	LoggedSound(Sound &wrapped)
		: wrapped_(wrapped)
	{}

	virtual void playClip(int soundID)
	{
		log("play clip");
		wrapped_.playClip(soundID);
	}

	virtual void stopClip(int soundID)
	{
		log("stop clip");
		wrapped_.stopClip(soundID);
	}

	virtual void stopAllClips()
	{
		log("stop all clips");
		wrapped_.stopAllClips();
	}

private:
	void log(const char* message)
	{
		// Code to log message...
	}

	Sound &wrapped_;
};

class Locator
{
public:
	static void initialize() { service = &nullService; }

	static Food& getSound() { return *service; }

	static void provide(Food* service)
	{
		if (service == NULL)
		{
			// Revert to null service.
			service = &nullService;
		}
		else
		{
			service = service;
		}
	}

private:
	static Food* service;
	static Expired nullService;
};
