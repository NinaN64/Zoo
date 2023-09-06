#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include "Player.h"



class GameManager
{
    Player & player1;
    Player & player2;
    public:
        GameManager(Player & p1, Player & p2);
        virtual ~GameManager();
        void play();
        void playinfo();


};

#endif // GAMEMANAGER_H
