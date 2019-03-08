//
// Created by mfbut on 2/22/2019.
//

#include "RowReference.h"

using namespace Curses;
RowReference::RowReference(Window &win, const int row) : win(win), row(row) {}

CellReference RowReference::at(int col) {
  return CellReference(win, row, col);
}

CellReference RowReference::operator[](int col) {
  return at(col);
}




