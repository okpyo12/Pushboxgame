#include "object.cpp"

void keypada(int key) {
  int ox;
  int oy;
  int memory = 0;
  map[obj->x][obj->y] = 5;
  if (key == KEY_UP) {
    if (check(obj->x, obj->y, key)) {
      ox = obj->x;
      oy = obj->y;
      map[ox][oy] = obj->memory;
      obj->memory = map[obj->x-1][obj->y];
      if (obj->memory == 2) {
        obj->memory = memory;
        memory = map[obj->x-2][obj->y];
        if (memory == 3) {
          map[obj->x-2][obj->y] = 6;
        }
        else {
          map[obj->x-2][obj->y] = map[obj->x-1][obj->y];
        }

      }
      else if (obj->memory == 6) {
        obj->memory = 3;
        memory = 2;
        map[obj->x-2][obj->y] = 2;
      }
      step++;
      obj->x--;
    }
  }
  else if (key == KEY_DOWN) {
    if (check(obj->x, obj->y, key)) {
      ox = obj->x;
      oy = obj->y;
      map[ox][oy] = obj->memory;
      obj->memory = map[obj->x+1][obj->y];
      if (obj->memory == 2) {
        obj->memory = memory;
        memory = map[obj->x+2][obj->y];
        if (memory == 3) {
          map[obj->x+2][obj->y] = 6;
        }
        else {
          map[obj->x+2][obj->y] = map[obj->x+1][obj->y];
        }
      }
      else if (obj->memory == 6) {
        obj->memory = 3;
        memory = 2;
        map[obj->x+2][obj->y] = 2;
      }
      step++;
      obj->x++;
    }
  }
  else if (key == KEY_RIGHT) {
    if (check(obj->x, obj->y, key)) {
      ox = obj->x;
      oy = obj->y;
      map[ox][oy] = obj->memory;
      obj->memory = map[obj->x][obj->y+1];
      if (obj->memory == 2) {
        obj->memory = memory;
        memory = map[obj->x][obj->y+2];
        if (memory == 3) {
          map[obj->x][obj->y+2] = 6;
        }
        else {
          map[obj->x][obj->y+2] = map[obj->x][obj->y+1];
        }
      }
      else if (obj->memory == 6) {
        obj->memory = 3;
        memory = 2;
        map[obj->x][obj->y+2] = 2;
      }
      step++;
      obj->y++;
    }
  }
  else if (key == KEY_LEFT) {
    if (check(obj->x, obj->y, key)) {
      ox = obj->x;
      oy = obj->y;
      map[ox][oy] = obj->memory;
      obj->memory = map[obj->x][obj->y-1];
      if (obj->memory == 2) {
        obj->memory = memory;
        memory = map[obj->x][obj->y-2];
        if (memory == 3) {
          map[obj->x][obj->y-2] = 6;
        }
        else {
          map[obj->x][obj->y-2] = map[obj->x][obj->y-1];
        }
      }
      else if (obj->memory == 6) {
        obj->memory = 3;
        memory = 2;
        map[obj->x][obj->y-2] = 2;
      }
      step++;
      obj->y--;
    }
  }
  else if (key == 'r' || key == 'R') {
    setlevel_xy();
    makeMap();
    life--;
  }
  map[obj->x][obj->y] = 5;

}
