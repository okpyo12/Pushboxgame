#include "check.cpp"

struct object {
    int x;
    int y;
    int memory;
    object(int value_x, int value_y) {
        x = value_x;
        y = value_y;
        memory = 0;
    }
};

int level_x = 8;
int level_y = 4;

object *obj = new object(level_x, level_y);

void setlevel_xy() {
    if(level == 1) {
        obj->x = 8;
        obj->y = 4;
    }
    else if (level == 2) {
        obj->x = 3;
        obj->y = 3;
    }
    else if (level == 3) {
        obj->x = 6;
        obj->y = 7;
    }
    else if (level == 4) {
        obj->x = 8;
        obj->y = 4;
    }
    else if (level == 5) {
        obj->x = 6;
        obj->y = 6;
    }
}
