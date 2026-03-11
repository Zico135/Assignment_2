#include "TwoDayPackage.h"



TwoDayPackage :: TwoDayPackage(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, const float weight, float Cost):
    Package(senderName, recipientName, senderAddress, recipientAddress, weight);
    {
        calculateCost(weight);
    }


void TwoDayPackage :: printInfo(){
    Package :: printInfo();
    std::cout << "The cost of this package is: €" << Cost << std::endl;
}

void TwoDayPackage :: calculateCost(float weight){
    Cost= (weight *2.5)+5+weight*weight*1.1;
}

float TwoDayPackage :: GetCost(){
    return Cost;
}