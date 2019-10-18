#include "SpriteGenerator.h"
#include "ResourceManager.h"


SpriteGenerator::SpriteGenerator()
{
}

void SpriteGenerator::init(glm::vec2 _position, char _type)
{
	color.r = 255;
	color.g = 255;
	color.b = 255;
	color.a = 255;
	type = _type;
	position = _position;
}

void SpriteGenerator::draw(SpriteBacth & spritebatch)
{
	static int textureID;
	switch (type)
	{
	case 'A':
		textureID = ResourceManager::getTexture("Textures/Gunter.png").id;
		break;
	case 'B':
		textureID = ResourceManager::getTexture("Textures/Finn.png").id;
		break;
	case 'C':
		textureID = ResourceManager::getTexture("Textures/Caracol.png").id;
		break;
	case 'D':
		textureID = ResourceManager::getTexture("Textures/Princesa.png").id;
		break;
	case 'E':
		textureID = ResourceManager::getTexture("Textures/Galleta.png").id;
		break;
	default:
		break;
	}
	const glm::vec4 uvRect(0.0f, 0.0f, 1.0f, 1.0f);
	glm::vec4 destRect(position.x, position.y, SG_WIDTH, SG_WIDTH);
	spritebatch.draw(destRect, uvRect, textureID, 0.0f, color);
}


SpriteGenerator::~SpriteGenerator()
{
}
