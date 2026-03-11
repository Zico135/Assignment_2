#include "Package.h"
#ifndef TWO_DAY_PACKAGE_H
#define TWO_DAY_PACKAGE_H

class TwoDayPackage : public Package {
    private:
        float Cost;
        
    
    public:
    //constructor
        TwoDayPackage(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, const float weight) ;
               
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
        float GetCost();
};

#endif