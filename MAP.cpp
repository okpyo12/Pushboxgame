#include <ncurses.h>
#include <iostream>
#include <fstream>

using namespace std;

#define MAX 10

int level = 1;
int step = 0;
int push = 0;
int life = 3;

int map[MAX][MAX] = {0,};
int map1[MAX][MAX] = {0,};
int map2[MAX][MAX] = {0,};
int map3[MAX][MAX] = {0,};
int map4[MAX][MAX] = {0,};
int map5[MAX][MAX] = {0,};

void makeMap() {
    ifstream ifile1("Level1.txt");
    ifstream ifile2("Level2.txt");
    ifstream ifile3("Level3.txt");
    ifstream ifile4("Level4.txt");
    ifstream ifile5("Level5.txt");

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ifile1 >> map1[i][j];
            ifile2 >> map2[i][j];
            ifile3 >> map3[i][j];
            ifile4 >> map4[i][j];
            ifile5 >> map5[i][j];
        }
    }
    if(level == 1) {
        step = 0;
        push = 0;
        for(int i = 0; i < MAX; i ++) {
            for(int j = 0; j < MAX; j++) {
                map[i][j] = map1[i][j];
            }
        }
    }
    else if(level == 2) {
        step = 0;
        push = 0;
        for(int i = 0; i < MAX; i ++) {
            for(int j = 0; j < MAX; j++) {
                map[i][j] = map2[i][j];
            }
        }
    }
    else if(level == 3) {
        step = 0;
        push = 0;
        for(int i = 0; i < MAX; i ++) {
            for(int j = 0; j < MAX; j++) {
                map[i][j] = map3[i][j];
            }
        }
    }
    else if(level == 4) {
        step = 0;
        push = 0;
        for(int i = 0; i < MAX; i ++) {
            for(int j = 0; j < MAX; j++) {
                map[i][j] = map4[i][j];
            }
        }
    }
    else if(level == 5) {
        step = 0;
        push = 0;
        for(int i = 0; i < MAX; i ++) {
            for(int j = 0; j < MAX; j++) {
                map[i][j] = map5[i][j];
            }
        }
    }
}


void printMap() {

    initscr();
    clear();
    start_color();

    init_pair(1, COLOR_RED, COLOR_RED);
    init_pair(2, COLOR_BLUE, COLOR_BLUE);
    init_pair(3, COLOR_GREEN, COLOR_GREEN);
    init_pair(4, COLOR_BLACK, COLOR_BLACK);
    init_pair(5, COLOR_WHITE, COLOR_WHITE);
    init_pair(6, COLOR_BLUE, COLOR_BLUE);

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(map[i][j] == 1) {
                attron(COLOR_PAIR(1));
                mvprintw(i,j,"%d", map[i][j]);
                attroff(COLOR_PAIR(1));
            }
            else if (map[i][j] == 0) {
                attron(COLOR_PAIR(4));
                mvprintw(i, j, "%d", map[i][j]);
                attroff(COLOR_PAIR(4));
            }
            else if (map[i][j] == 2 || map[i][j] == 6) {
                attron(COLOR_PAIR(2));
                mvprintw(i, j, "%d", map[i][j]);
                attroff(COLOR_PAIR(2));
            }
            else if (map[i][j] == 3) {
                attron(COLOR_PAIR(3));
                mvprintw(i,j,"%d", map[i][j]);
                attroff(COLOR_PAIR(3));
            }
            else if (map[i][j] == 4) {
                attron(COLOR_PAIR(4));
                mvprintw(i,j,"%d", map[i][j]);
                attroff(COLOR_PAIR(4));
            }
            else if(map[i][j] == 5) {
                attron(COLOR_PAIR(5));
                mvprintw(i,j,"%d", map[i][j]);
                attroff(COLOR_PAIR(5));
            }
        }
    }
    mvprintw(11, 1, "step : ");
    mvprintw(11, 8, "%d", step);
    mvprintw(12, 1, "push : ");
    mvprintw(12, 8, "%d", push);
    mvprintw(13, 1, "Level : ");
    mvprintw(13, 9, "%d", level);
    mvprintw(14, 1, "Life : ");
    mvprintw(14, 8, "%d", life);

    curs_set(0);
    noecho();
    refresh();
}
