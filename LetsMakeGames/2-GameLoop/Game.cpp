
#pragma once
#include "Game.h"

Game::Game(){}
Game::~Game(){}

void Game::init(const char* title, int xPos, int yPos, int width, int height, bool fullscreen)
{
	
	int flags = 0;
	
	if(fullscreen){
		flags = SDL_WINDOW_FULLSCREEN;
	}

	if(SDL_Init(SDL_INIT_EVERYTHING) == 0){
		
		std::cout << "Subsystems Initialized!..." << std::endl;

		window = SDL_CreateWindow(title, xPos, yPos, width, height, flags);
		
		if(window){
			std::cout << "Window successfully created" << std::endl;
		}
		
		renderer = SDL_CreateRenderer(window, -1, 0);
		
		if(renderer){
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
			std::cout << "Renderer successfully created" << std::endl;
		}
		isRunning = true;
	} else {
		isRunning = false;
	}
}

void Game::handleEvents()
{
	SDL_Event event;
	SDL_PollEvent(&event);
	switch(event.type){
		case SDL_QUIT:
			// Should run on X-out
			isRunning = false;
			break;
		default:
			break;
	}
}

void Game::update()
{
	count++;
	std::cout << "Counter: " << count << std::endl;
	// All individual update functions go here
}

void Game::render()
{
	SDL_RenderClear(renderer);
	// Add stuff to render here
	SDL_RenderPresent(renderer);
}

void Game::clean()
{
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
	std::cout << "Game cleaned" << std::endl;
}

bool Game::running(){
	return isRunning;
}

