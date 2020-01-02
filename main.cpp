#include "endgame.cpp"

int main() {
    for(int i = 0; i < 5; i++) {
        setlevel_xy();
        makeMap();
        while (true){
            if (endgame()) {
              break;
            }
            LifeZero();
            map[obj->x][obj->y] = 5;
            printMap();
            keypad(stdscr, true);
            int key = getch();
            keypada(key);
        }
    }
    Ending();
    endwin();
    return 0;
}
