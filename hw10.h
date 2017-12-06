//Programmer: Sayok Das and Mark Daming
// File: hw10.h
// Purpose:

#ifndef HW10_H
#define HW10_H
using namespace std;

const int MAX_Y = 25;
const int MAX_X = 25;
const int SEA_SIZE = 17;
const int KILLER_WHALES = 2;
const int MIN_HP = 0;
const int MAX_HP = 100;
const int MIN_SPAWN_HP = 70;
const int MAX_SPAWN_HP = 80;
const int FOOD_MIN = 1;
const int FOOD_MAX = 10;
const int INITIAL_PENGUINS = 20;
const int MAX_PENGUINS = 50;
const int INITIAL_FISH = 35;
const int MAX_FISH = 200;

class Sea
{
  private:
    short int the_sea;
    char sea_array[MAX_X][MAX_Y];
    void clear();
    void populate();
  public:
    Sea(int size, Penguins peng_arr[], Killer_Whale kw_arr[], Fish fish_arr[]): sea_world(size){clear(); populate();}
    friend ostream & operator <<(ostream & os,Sea & water);
};

class Penguins
{
  private:
    int health;
    int peng_X;
    int peng_Y;
    bool alive_or_not;
  public:
    Penguins();
    void peng_moving();
};

class Fish
{
  private:
    int food;
    int fish_X;
    int fish_Y;
  public:
    Fish();
    void fish_moving();
};

class Killer_Whale
{
  private:
    int killer_whale_X;
    int killer_whale_Y;
    int kills;
  public:
    Killer_Whale();
    void killer_whale_moving();
};
