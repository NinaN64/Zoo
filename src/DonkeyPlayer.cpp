#include "DonkeyPlayer.h"

DonkeyPlayer::DonkeyPlayer(const std::string name) : Player(name)
{
    //ctor
}

DonkeyPlayer::~DonkeyPlayer()
{
    //dtor
}

char DonkeyPlayer:: PlayerChoice()
{
    return 'r';
}
