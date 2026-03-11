#include "Package.h"
#ifndef OVERNIGHT_PACKAGE_H
#define OVERNIGHT_PACKAGE_H

class OvernightPackage : public Package {
    private:
        float Cost;
    
    public:

    //constructor
        OvernightPackage(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, const float weight) ;
        virtual void printInfo() override;
        virtual void calculateCost(float weight) override;
        float GetCost();
};

#endif