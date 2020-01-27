
#ifndef Game_h
#define Game_h

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>



class Game{
public:
	Game();
	~Game();

	void init(const char* title, int xPos, int yPos, int width, int height, bool fullscreen);
	void handleEvents();
	void update();
	void render();
	void clean();
	bool running();

private:
	int count = 0;
	bool isRunning;
	SDL_Window * window;
	SDL_Renderer * renderer;
};

#endif // Game_h
