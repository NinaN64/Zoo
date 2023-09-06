#include "MonkeyPlayer.h"
#include <string>
#include <ctime>

MonkeyPlayer::MonkeyPlayer(const std::string name) : Player(name)
{
    //ctor
}

MonkeyPlayer::~MonkeyPlayer()
{
    //dtor
}

char MonkeyPlayer:: PlayerChoice()
{
    char choice[3] = {'r','p','s'};
    srand(time(NULL));
    return choice[std::rand()%3];
}
