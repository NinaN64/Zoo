#include "GameManager.h"
#include <iostream>

GameManager::GameManager(Player & p1, Player & p2) : player1(p1), player2(p2)
{

}

GameManager::~GameManager()
{
    //dtor
}

void GameManager:: play()
{
    char fchoice, schoice;
    std::cout<<"In the game there is "<<player1.Name()<<" and "<<player2.Name()<<std::endl;
    fchoice = player1.PlayerChoice();
    schoice = player2.PlayerChoice();

    if(fchoice == schoice)
    {
        playinfo();
        std::cout<<"It's a tie\n";
    }
    if(fchoice == 'r' && schoice == 'p')
    {
        playinfo();
        std::cout<<player2.name<<" Wins";
    }
    if(fchoice == 'r' && schoice == 'p')
    {
        playinfo();
        std::cout<<player1.name<<" Wins";
    }
    if(fchoice == 'p' && schoice == 's')
    {
        playinfo();
        std::cout<<player2.name<<" Wins";
    }
     if(fchoice == 's' && schoice == 'p')
    {
        playinfo();
        std::cout<<player1.name<<" Wins";
    }
     if(fchoice == 'r' && schoice == 's')
    {
        playinfo();
        std::cout<<player1.name<<" Wins";
    }
    if(fchoice == 's' && schoice == 'r')
    {
        playinfo();
        std::cout<<player1.name<<" Wins";
    }
    return;
}


void GameManager::playinfo()
{
    char x = player1.PlayerChoice();
    char y = player2.PlayerChoice();
    std::string a,b;
    if(x == 'r') a = "rock";
     if(x == 'p') a = "paper";
     if(x == 's') a = "scissors";

     if(y == 'r') b = "rock";
     if(y == 'p') b = "paper";
     if(y == 's') b = "scissors";

    std::cout<<player1.name<<" choose "<<a<<std::endl;
    std::cout<<player2.name<<" choose "<<b<<std::endl;

}

