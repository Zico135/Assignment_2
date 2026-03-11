//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Defines the functions for the overnight package class, which inherits from the package class. It has a different cost calculation than the two day package.
//==================================================================================================

#include "OvernightPackage.h"

//Constructor for overnight package, it calls the constructor of the package class to initialize the common attributes
OvernightPackage::OvernightPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){}

//Overwrite the package printInfo function to show that this is an overnight package
void OvernightPackage::printInfo() {
    std::cout << "This is an overnight package with the following info:" << std::endl;
    Package::printInfo();
}

//Overwrite the package calculateCost function to calculate the cost of an overnight package, which is different from a two day package
float OvernightPackage::calculateCost() {
    return weight*weight * exponentialCost + weight * linearCost + flatFee; // weight^2*1.1 + weight*2.5 + 5
}