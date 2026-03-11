//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Defines the functions for the two day package class, which inherits from the package class. It has a different cost calculation than the overnight package.
//==================================================================================================

#include "TwoDayPackage.h"

//Constructor for two day package, it calls the constructor of the package class to initialize the common attributes
TwoDayPackage::TwoDayPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){}

//Overwrite the package printInfo function to show that this is a two day package
void TwoDayPackage::printInfo() {
    std::cout << "This is a two day package" << std::endl;
    Package::printInfo();
}

//Overwrite the package calculateCost function to calculate the cost of a two day package, which is different from an overnight package
float TwoDayPackage::calculateCost() {
    return weight * linCost + flatFee; // weight*2.5 + 5
}
