#include "Package.h"
#ifndef TWO_DAY_PACKAGE_H
#define TWO_DAY_PACKAGE_H

class TwoDayPackage : public Package {
    private:
        float cost;
    
    public:
        //constructor
        TwoDayPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight, float cost);
        
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};

#endif