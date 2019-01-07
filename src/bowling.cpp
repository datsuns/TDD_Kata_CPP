#include "bowling.h"

Game::Game():current_score(0){
}

void Game::roll(int pins){
	this->current_score += pins;
	return;
}

int Game::score(void){
	return this->current_score;
}
