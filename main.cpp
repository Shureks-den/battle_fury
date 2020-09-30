#include <iostream>
#include <algorithm>

class BattleFury {
public:
    BattleFury() {
        army = new int[0];
        damage = 0;
        cleave = 0;
        unit_n = 0;
    }

    BattleFury(int ennum, int dmg, int clv) {
        army = new int[ennum];
        damage = dmg;
        cleave = clv;
        unit_n = ennum;
    }

    void armyhp() {
        std::cout << "Input hp for each enemy" << std::endl;
        for (int i = 0; i < unit_n; i++) {
            std::cin >> army[i];
        }
    }

    void battle_formation() {
        std::cout << "Enemies' hp" << std::endl;
        for (int i = 0; i < unit_n; i++) {
            std::cout << "|" << army[i] << "| ";
        }
        std::cout << std::endl;
    }

    ~BattleFury() {
        std::cout << "Battle has ended" << std::endl;
    };

    void result() {
        std::cout << "Hero's damage is " << damage << " and hero's cleave damage is " << cleave
                  << ". Army size: " << unit_n << std::endl;
    }

    int battle() {
        std::sort(army, army + this->unit_n, std::greater<int>());
        battle_formation();
        int axe_swing = 0;
        while (army[0] > 0) {
            dmg();
            insert();
            axe_swing++;
        }
    return axe_swing;
    }

private:
    int *army;
    int damage;
    int cleave;
    int unit_n;

    void dmg() {
        army[0] -= damage;
        int i = 1;
        while (army[i] > 0 && i < unit_n) {
            army[i] -= cleave;
            i++;
        }
    }

    void insert() {
        int temp;
        int i = 0;
        while (army[i] < army[i + 1] && i< unit_n-1) {
            temp = army[i];
            army[i] = army[i + 1];
            army[i + 1] = temp;
            i++;
        }

    }
};

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
