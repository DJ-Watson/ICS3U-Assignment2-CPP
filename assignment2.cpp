// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: September 2019
// This program calculates the surface area of a triangular pyramid
// with user input

#include <iostream>


int main() {
    // variables
    int length;
    int width;
    int height;
    int area;
    // input
    std::cout << "height of base: ";
    std::cin >> length;
    std::cout << "width of pyramid: ";
    std::cin >> width;
    std::cout << "height of pyramid (face): ";
    std::cin >> height;
    // process
    area = (length*width)/2+3*width*height/2;
    // output
    std::cout << "" << std::endl;
    std::cout << "SURFACE AREA: " << area << "cm²" << std::endl;
}
