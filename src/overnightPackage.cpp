#include "OvernightPackage.h"
#include <iostream>



OvernightPackage :: OvernightPackage(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, const float weight, float cost):
    Package(senderName, recipientName, senderAddress, recipientAddress, weight);
    {
        calculateCost(weight);
    }


void OvernightPackage :: printInfo(){
    Package :: printInfo();
    std::cout << "The cost of this package is: €" << Cost << std::endl;
}

void OvernightPackage :: calculateCost(float weight){
    cost= (weight *2.5)+5+weight*weight*1.1;
}

float OvernightPackage :: GetCost(){
    return cost;
}