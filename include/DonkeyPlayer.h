#ifndef DONKEYPLAYER_H
#define DONKEYPLAYER_H
#include <string>
#include <Player.h>

class DonkeyPlayer : public Player
{
    public:
        DonkeyPlayer(const std::string name);
        virtual ~DonkeyPlayer();
        virtual char PlayerChoice();
};

#endif // DONKEYPLAYER_H
