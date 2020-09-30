#include "BattleFury.h"


int main() {
    int ennum;
    int dmg;
    int clv;
    int axe;
    std::cout << "Input enemy number, battle fury damage and cleave" << std::endl;
    std::cin >> ennum >> dmg >> clv;
    BattleFury *Magina = new BattleFury(ennum, dmg, clv);
    Magina->armyhp();
    Magina->result();
    Magina->battle_formation();
    axe = Magina->battle();
    std::cout<<axe;
    return 0;
}
