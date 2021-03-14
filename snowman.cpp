#include <iostream>
#include "snowman.hpp"
#include <string>
#include <array>
using namespace std;


const array<array<string,COLUMN>,ROW> dict ={{{},
   
     /*1 Head*/     {"","       \n _===_ ","  ___  \n ..... ","   _   \n  /_\\  ","  ___  \n (_*_) "}, 
     /*2 Nose*/     {"",",",".","_"," "},
     /*3 LeftEye*/  {"",".","o","O","-"},
     /*4 RightEye*/ {"",".","o","O","-"},
     /*5 LeftArm*/  {"","<","\\","/"," "},
     /*6 RightArm*/ {"",">","/","\\"," "},
     /*7 Torso*/    {""," : ","] [","> <","   "},
     /*8 Base*/     {"" ,"( : )","(\" \")","(___)","(   )"}
                                             
    }};

namespace ariel {   
    string snowman(int str) {
        if (str < lowerBound || str > upperBound) {throw out_of_range("Invaild Input");}
        
        // create array that contains the input by correct order
        int in = str;
        int const divide = 10;
        array <int,INPUT_LENGTH> input = {0};        
        for (int i = INPUT_LENGTH - 1; i > 0; i--) {
            int digit = in % divide;
            if (digit < 1 || digit > 4) {throw out_of_range("Invaild Input");}
            input.at(i) = digit;
            in = in / divide;
        }

        // get the body organ of the snowman from the given input 
        string head = dict[headIndex][input[headIndex]];
        string nose = dict[noseIndex][input[noseIndex]];
        string lefteye = dict[leftEyeIndex][input[leftEyeIndex]];
        string righteye = dict[rightEyeIndex][input[rightEyeIndex]];
        string leftarmup = " ";
        string leftarm = dict[leftArmIndex][input[leftArmIndex]];
        string rightarmup = " ";
        string rightarm = dict[rightArmIndex][input[rightArmIndex]];
        string torso = dict[torsoIndex][input[torsoIndex]];
        string base = dict[baseIndex][input[baseIndex]];

        // check if the hand is up or down
        if (input[leftArmIndex] == isUp) {
            leftarmup = leftarm;
            leftarm = " ";
        }
        if(input[rightArmIndex] == isUp) {
            rightarmup = rightarm;
            rightarm = " ";
        }

        // concatenating the strings that represent the organ of the snowman
        string snowman = head + "\n" + // level 1
                         leftarmup + "("+ lefteye + nose + righteye + ")" + rightarmup + "\n" + // level 2
                         leftarm + "(" + torso + ")" + rightarm + "\n " + // level 3
                         base +" "; // level 4
    
        return snowman;

    }
}
