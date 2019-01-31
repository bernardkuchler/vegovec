#include <iostream>
using namespace std;

class TileType {
protected:
    int SEA;
    int LAND;
};

class Tile:public TileType {
    TileType type;
};

class MapElement {
protected:
    int x;
    int y;
    int maxSpeed;
};

class Trash:public MapElement {
    int quantity;
};

class Map {
    int width;
    int length;
    int tidesMaxSpeed;

    List[Human] graveyard
            List[List[Tile]] tiles
            List[Trash] trashElements
            List[Object] badHumans
            List[Object] goodHumans
            Hero hero
            List[Ship] ships

    void tidesShifts();
};

class Ship:public MapElement {
    List[Trash] trashBin
    void captureTrash();
};

class Human:public MapElement  {
protected:
    int strength();
};

class Hero:public Human {
    int sightRange;
    int killCount;
    int reputation;
}

class BadHuman:public Human {
    List[Trash] emptyBackPack
            bool invincibility();
}

class GoodHuman:public Human {

};

int main() {
    return 0;
}
