#include "Zombie.h"
#include "ResourceManager.h"

Zombie::Zombie()
{
}

void Zombie::init(float _speed, glm::vec2 _position)
{
	speed = _speed;
	position = _position;
	color.r = 240;
	color.g = 255;
	color.b = 255;
	color.a = 255;
}

void Zombie::update()
{
	if (position.x == 7000) {
		speed *= -1;
	}
	if (position.x == 200) {
		speed *= -1;
	}
	position.x += speed;
}

void Zombie::draw(SpriteBacth & spritebatch)
{
	static int textureID = ResourceManager::getTexture("Textures/zombie.png").id;
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(position.x, position.y, AGENT_WIDTH, AGENT_WIDTH);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}


Zombie::~Zombie()
{
}
