#include "OvernightPackage.h"
#include <iostream>



OvernightPackage :: OvernightPackage(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, const float weight){
    Package(senderName, recipientName, senderAddress, recipientAddress, weight);
    Cost = OvernightPackage :: calculateCost(weight);
}

void OvernightPackage :: printInfo(){
    Package :: printInfo();
    std::cout << "The cost of this package is: €" << Cost << std::endl;
}

float OvernightPackage :: calculateCost(){
    float weight = Package::GetWeight();
    return (weight *2.5)+5+weight*weight*1.1;
}

float OvernightPackage :: GetCost(){
    return Cost;
}