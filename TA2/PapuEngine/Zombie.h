#pragma once
#include "Human.h"

class Zombie : public Human
{
private:
	int type;
public:
	Zombie();
	~Zombie();
	void init(float _speed, glm::vec2 _position, int type);
	void update();
	void draw(SpriteBacth& spritebatch);
};

