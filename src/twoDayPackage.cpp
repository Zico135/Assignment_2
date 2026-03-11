#include "TwoDayPackage.h"

TwoDayPackage::TwoDayPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_, float cost_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){
    cost = cost_;
}

void TwoDayPackage::printInfo() {
    Package::printInfo();
    std::cout << "Two-Day Package Cost: $" << cost << std::endl;
}

float TwoDayPackage::calculateCost(float weightPackage) {
    return weightPackage * 2.5 + 5; 
}
