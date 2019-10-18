#pragma once
#include <glm\glm.hpp>
#include "SpriteBacth.h"
#include "GLTexture.h"

const int SG_WIDTH = 60;

class SpriteGenerator
{
private:
	glm::vec2 position;
	char type;
	Color color;
public:
	SpriteGenerator();
	glm::vec2 getPosition() const { return position; }
	void init(glm::vec2 _position, char _type);
	void draw(SpriteBacth& spritebatch);
	~SpriteGenerator();
};

