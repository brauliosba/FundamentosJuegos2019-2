#pragma once
#include <glm\glm.hpp>
#include "SpriteBacth.h"
#include "GLTexture.h"

const int AGENT_WIDTH = 60;

class Agent
{
protected:
	glm::vec2 position;
	float speed;
	Color color;
public:
	Agent();
	glm::vec2 getPosition() const { return position; };
	virtual void update() = 0;
	virtual void draw(SpriteBacth& spritebatch);
	virtual ~Agent();
};

