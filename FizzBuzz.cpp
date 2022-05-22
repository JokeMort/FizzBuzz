//
// Created by tomas on 22.05.2022.
//
#include <iostream>
#include "FizzBuzz.h"
#define size 100
void FizzBuzz(){
    int fizz = 3, buzz = 5;
    for (int n = 1; n <= size; n++){
        std::string text;
        bool text_was_added = false;
        if (n % fizz == 0){
            text += "FIZZ";
            text_was_added = true;
        }
        if (n % buzz == 0){
            text += "BUZZ";
            text_was_added = true;
        }
        if (!text_was_added){
            std::cout << n << std::endl;
        }
        else{
            std::cout << text << std::endl;
        }
    }
}