#include "ElephantPlayer.h"
#include <ctime>

ElephantPlayer::ElephantPlayer(const std::string name) : Player(name)
{
    //ctor
}

ElephantPlayer::~ElephantPlayer()
{
    //dtor
}
char ElephantPlayer:: PlayerChoice()
{
    srand(time(NULL));
    int help = std::rand()%100;
    if(help<=40) return 'p';
    if(help>40 && help<=80) return 's';
    if(help>80) return 'r';
}
