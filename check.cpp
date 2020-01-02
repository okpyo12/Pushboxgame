#include "MAP.cpp"

bool check(int x, int y, int key) {
  if (key == KEY_UP) {
    if (map[x-1][y] == 1) {
      return false;
    }
    else if (map[x-1][y] == 2 || map[x-1][y] == 6) {
      if (map[x-2][y] == 2 || map[x-2][y] == 1 || map[x-2][y] == 6) {
        return false;
      }
      else {
        push++;
        return true;
      }
    }
  }
  else if (key == KEY_DOWN) {
    if (map[x+1][y] == 1) {
      return false;
    }
    else if (map[x+1][y] == 2 || map[x+1][y] == 6) {
      if (map[x+2][y] == 2 || map[x+2][y] == 1 || map[x+2][y] == 6) {
        return false;
      }
      else {
        push++;
        return true;
      }
    }
  }
  else if (key == KEY_LEFT) {
    if (map[x][y-1] == 1) {
      return false;
    }
    else if (map[x][y-1] == 2 || map[x][y-1] == 6) {
      if (map[x][y-2] == 2 || map[x][y-2] == 1 || map[x][y-2] == 6) {
        return false;
      }
      else {
        push++;
        return true;
      }
    }
  }
  else if (key == KEY_RIGHT) {
    if (map[x][y+1] == 1) {
      return false;
    }
    else if (map[x][y+1] == 2 || map[x][y+1] == 6) {
      if (map[x][y+2] == 2 || map[x][y+2] == 1 || map[x][y+2] == 6) {
        return false;
      }
      else {
        push++;
        return true;
      }
    }
  }
  return true;
}
