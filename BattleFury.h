//
// Created by alexa on 30.09.2020.
//
#ifndef FURY_RAGE_BATTLEFURY_H
#define FURY_RAGE_BATTLEFURY_H
#include <iostream>
#include <algorithm>
class BattleFury {
public:
    BattleFury();
    BattleFury(int ennum, int dmg, int clv);
    void armyhp();
    void battle_formation();
    ~BattleFury();
    void result();
    int battle();
private:
    int *army;
    int damage;
    int cleave;
    int unit_n;
    void dmg();
    void insert();
};
#endif //FURY_RAGE_BATTLEFURY_H
