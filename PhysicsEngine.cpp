#include<iostream>
#include <vector>
#include "System.h"


void printVector(std::vector<float> x)
{
    for(int i : x)
    {
        std::cout << i;
    }
    std::cout << std::endl;
}

int main()
{
    int dimensions = 1;
    std::vector<std::vector<float>> list(2, std::vector<float>(dimensions, 0.0f));  // Torque list

    std::vector<std::vector<float>> list2 =
    {
        {0,0,0},
        {0,0,0},
        {0,0,0}
    };

    std::vector<float> floatVec = {0.0f,0.0f,0.0f};

    System sys1(list2,floatVec,floatVec,list,floatVec,floatVec);

    std::cout << "hi frfr" << std::endl;

    // Print elements in a vector

    std::cout<< "Translational Positions" << std::endl;
    printVector(sys1.getPos());

    std::cout<< "Translational Velocities" << std::endl;
    printVector(sys1.getVel());

    std::cout<< "Angular Positions" << std::endl;
    printVector(sys1.getAngPos());

    std::cout<< "Angular Velocities" << std::endl;
    printVector(sys1.getAngVel());
    
    return 0;
}