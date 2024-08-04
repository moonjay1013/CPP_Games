//
// Created by moonjay on 2024/8/4.
//

#ifndef TICTACTOE_GAME_SET_H
#define TICTACTOE_GAME_SET_H

#include <iostream>
#include <ctype.h>  // 'toupper' function
#include <conio.h>
#include <time.h>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

/* TicTacToe need */
extern void resetBoard();

extern void printBoard();

extern int checkFreeSpaces();

extern void playerMove();

extern void computerMove();

extern char checkWinner();

extern void printWinner(char winner);

#endif //TICTACTOE_GAME_SET_H
