#pragma once

#include <iostream>
#include <SFML/Graphics.hpp>


class Player
{
public:
	Player()
	{
		//Default Constructor
	}


	Player(std::string imgDirectory)
	{

		if (!playerOneTexture.loadFromFile(imgDirectory))
		{
			std::cerr << "Error\n";
		}

		playerOneSprite.setTexture(playerOneTexture);

		if (!playerTwoTexture.loadFromFile(imgDirectory))
		{
			std::cerr << "Error\n";
		}

		playerTwoSprite.setTexture(playerTwoTexture);
		
		playerTwoSprite.setPosition(850.f, 200.f);
	}

	void drawPlayer1(sf::RenderWindow& window)
	{
		window.draw(playerOneSprite);
	}

	void drawPlayer2(sf::RenderWindow& window)
	{
		
		window.draw(playerTwoSprite);
		

	}

	void movePlayerOne(char direction, float moveSpeed)
	{
		if (direction == 'u')
		{
			playerOneSprite.move(0, -moveSpeed);
			
		}
		else if (direction == 'd')
		{
			playerOneSprite.move(0, moveSpeed);

		}

		


	}

	void movePlayerTwo(char direction, float moveSpeed)
	{
		if (direction == 'u')
		{
			playerTwoSprite.move(0, -moveSpeed);



		}

		else if (direction =='d')
		{

			playerTwoSprite.move(0, moveSpeed);

		}

	}
	


private:
	sf::Texture playerOneTexture;
	sf::Sprite playerOneSprite;

	sf::Texture playerTwoTexture;
	sf::Sprite playerTwoSprite;
};