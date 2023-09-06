#include "HumanPlayer.h"
#include <string>
#include <iostream>

HumanPlayer::HumanPlayer(const std::string name) : Player(name)
{
    //ctor
}

HumanPlayer::~HumanPlayer()
{
    //dtor
}

char HumanPlayer:: PlayerChoice()
{
    char help = 'a';
    std::cout<<"Pick your option\n[r] Rock\n[p]Paper\n[s]Scissor\n";
    while(help != 'r' && help != 'p' && help != 's'){
    std::cin>>help;
    if(help == 'r') return 'r';
    if(help == 'p') return 'p';
    if(help == 's') return 's';
    else std::cout<<"pick something else\n";
    }
}
