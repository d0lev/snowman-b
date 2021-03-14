#pragma once
#include <string>
#include <iostream>
using namespace std;
int const ROW = 9;
int const COLUMN = 5;
int const INPUT_LENGTH = 9;

int const upperBound = 44444444;
int const lowerBound = 11111111;
// each index represent the body organ of the snowman
int const headIndex = 1;
int const noseIndex = 2;
int const leftEyeIndex = 3;
int const rightEyeIndex = 4;
int const leftArmIndex = 5;
int const rightArmIndex = 6;
int const torsoIndex = 7;
int const baseIndex = 8;
int const isUp = 2;
namespace ariel {
    string snowman(int str);
    }