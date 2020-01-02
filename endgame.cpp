#include "keypad.cpp"

bool endgame() {
  int cnt = 0;
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (map[i][j] == 3) {
        cnt++;
      }
    }
  }
  if (cnt == 0 && obj->memory != 3) {
    level++;
    return true;
  }
  else {
    return false;
  }
}

void LifeZero() {
    if (life == 0) {
        clear();
        mvprintw(7, 5, "Retry?");
        getch();
        life = 3;
        level = 1;
        setlevel_xy();
        makeMap();
    }
}

void Ending() {
    clear();
    mvprintw(8, 1, "Congratulations! You did it!");
    mvprintw(10, 1, "Make by Pyo Sangwoo, Choi Jewelry");
    getch();
}
