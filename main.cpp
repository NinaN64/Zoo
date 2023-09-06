#include <iostream>
#include "Player.h"
#include "MonkeyPlayer.h"
#include "HumanPlayer.h"
#include "ElephantPlayer.h"
#include "DonkeyPlayer.h"
#include "GameManager.h"


using namespace std;

int main()
{
    MonkeyPlayer rafiki("PawianRafiki");
  ElephantPlayer dumbo("Dumbo");
  DonkeyPlayer klapouchy("Klapouchy");
  HumanPlayer janek("Jan");
  GameManager mgr(janek, dumbo);

  mgr.play();
  return 0;
}
