// Copyright (c) 2023 Val I All rights reserved.
//
// Created by: Val
// Created on: Oct, 17, 2023
// This program asks the user to guess a randomized number
// then lets them know if they're right or wrong.

#include <cstdlib>
#include <iostream>

int main() {
    // declaring variables
    int correctAnswer, userGuess;
    srand((unsigned)time(NULL));
    // generate a random number between 0 and 9
    correctAnswer = rand() % 9 + 0;

    // input - Get user guess
    std::cout << "Guess a number between 0 and 9\n";
    std::cin >> userGuess;

    // process- check if answer is right.
    if (userGuess == correctAnswer) {
        std::cout << "Correct, you guessed right.\n";
    } else {
        std::cout << "Wrong, The correct answer is " << correctAnswer << ".\n";
    }
}
