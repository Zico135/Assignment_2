#include "Package.h"
#ifndef OVERNIGHT_PACKAGE_H
#define OVERNIGHT_PACKAGE_H

class OvernightPackage : public Package {
    private:
        float cost;
    
    public:

    //constructor
        OvernightPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight, float cost);
        
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};

#endif