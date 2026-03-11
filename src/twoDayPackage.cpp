#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){}

void TwoDayPackage::printInfo() {
    std::cout << "This is a two day package" << std::endl;
    Package::printInfo();
}

float TwoDayPackage::calculateCost() {
    return weight * linCost + flatFee; 
}
