// copyright (c) 2019 st. Mother teresa HS All rights reseved.
//
// created by Seti Ngabo
// Created on: Sept 2021
// this program shows how cool and global variables work

#include <iostream>

// globlal variable
int variableX = 25;

void localvariable() {
    // this shows what happens with local variables

    int variableX = 10;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout <<"Local variableX, variableY, variableZ: " << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}


void globalvariable() {
    // this shows what happens with global variables

    variableX = variableX + 1;
    int variableY = 30;
    int variableZ = variableX + variableY;
    std::cout <<"Local variableX, variableY, variableZ: " << variableX
    << "+" << variableY << "=" << variableZ << std::endl;
}

int main() {
    // this function calls local and global

    localvariable();
    globalvariable();
}
