#include "Player.h"

Player::Player(const std::string & n)
{
    name = n;
}

Player::~Player()
{
    //dtor
}

char Player::PlayerChoice()
{
    return 'r';
}
