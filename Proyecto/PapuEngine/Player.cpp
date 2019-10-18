#include "Player.h"
#include <SDL\SDL.h>

Player::Player()
{
}

void Player::init(float _speed,
	glm::vec2 _position, InputManager* _inputManager) {
	inputManager = _inputManager;
	speed = _speed;
	position = _position;
	color.r = 240;
	color.g = 255;
	color.b = 255;
	color.a = 255;
}

void Player::update() {
	if (inputManager->isKeyPressed(SDLK_UP)) {
		position.y += speed;
	}

	if (inputManager->isKeyPressed(SDLK_DOWN)) {
		position.y -= speed;
	}

	if (inputManager->isKeyPressed(SDLK_LEFT)) {
		position.x -= speed;
	}

	if (inputManager->isKeyPressed(SDLK_RIGHT)) {
		position.x += speed;
	}
}


Player::~Player()
{
}
