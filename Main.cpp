#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "GameConsts.h"


using namespace std;
using namespace sf;







int main() 
{

    //Create window 
    sf::RenderWindow window;

    //Center window and enable desktop mode for correct size
    sf::Vector2i centerWindow((sf::VideoMode::getDesktopMode().width / 2) - 445, (sf::VideoMode::getDesktopMode().height / 2) - 480);
    window.create(sf::VideoMode(900, 900), "PONG", sf::Style::Titlebar | sf::Style::Close);
    window.setPosition(centerWindow);


    //Allows player to continously hold key for movement
    window.setKeyRepeatEnabled(true);

    //Create object player 1 instance of class player
    //Load file to apply texture to sprite P1
    Player playerOne("pong_p1.png");

    
    //Create object player 2 instance of class player
    //Load file to apply texture to sprite P2
    Player playerTwo("pong_p2.png");


    //Main Loop:
    while (window.isOpen()) 
    {

        sf::Event Event;

        //Event Loop:
        while (window.pollEvent(Event)) {
            switch (Event.type) {

            case sf::Event::Closed:
                window.close();
            }



           
        }
        window.clear();



        //Call Player 1 movement method from class
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            playerOne.movePlayerOne('u', 0.2f);

        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            playerOne.movePlayerOne('d', 0.2f);
        }
        
        //Call Player 2 movement method from player class
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {

            playerTwo.movePlayerTwo('y', 0.2f);



        }

        else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {

            playerTwo.movePlayerTwo('n', 0.2f);
        }

        



        playerOne.drawPlayer1(window);
        playerTwo.drawPlayer2(window);




        window.display();
    }











}