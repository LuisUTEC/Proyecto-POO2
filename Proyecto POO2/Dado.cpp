//
// Created by LCorderoP on 27/05/2019.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class Dado{
private:
    int num;
public:
    Dado() {}

    int lanzar(){
        srand(time(NULL));
        num = (rand() % 6) + 1;
        return num;
    }
};