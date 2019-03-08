//
// Created by mfbut on 2/24/2019.
//

#include "CellReference.h"
#include "Window.h"
#include "WindowImplementation.h"

using namespace Curses;

CellReference::CellReference(Window &win, const int row, const int col) : win(win), row(row), col(col) {}

CellReference &Curses::CellReference::operator=(const char letter) {
  WindowImplementation::addCharacter(letter);
  return *this;
}

/*Curses::CellReference::operator char() const {
  char c = WindowImplementation::getWindowChar(row, col);
  WindowImplementation::moveCursor(row, col)
  return WindowImplementation::getWindowChar(row, col);
  */
}
