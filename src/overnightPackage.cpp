#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){}

void OvernightPackage::printInfo() {
    std::cout << "This is an overnight package with the following info:" << std::endl;
    Package::printInfo();
}

float OvernightPackage::calculateCost() {
    return weight*weight * 1.1 + weight * 2.5 + 5; // example cost calculation for overnight package
}
