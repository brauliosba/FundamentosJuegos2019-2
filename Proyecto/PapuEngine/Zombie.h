#pragma once
#include "Human.h"

class Zombie : public Human
{
public:
	Zombie();
	~Zombie();
	void init(float _speed, glm::vec2 _position);
	void update();
	void draw(SpriteBacth& spritebatch);
};

