#include "OvernightPackage.h"

OvernightPackage::OvernightPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_, float cost_) : Package(senderName_, recipientName_, senderAddress_, recipientAddress_, weight_){
    cost = cost_;
}

void OvernightPackage::printInfo() {
    Package::printInfo();
    std::cout << "Overnight Package Cost: $" << cost << std::endl;
}

float OvernightPackage::calculateCost(float weightPackage) {
    return weightPackage*weightPackage * 1.1 + weightPackage * 2.5 + 5; // example cost calculation for overnight package
}
