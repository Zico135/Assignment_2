#include "Package.h"
#ifndef OVERNIGHT_PACKAGE_H
#define OVERNIGHT_PACKAGE_H

class OvernightPackage : public Package {
    private:
        float Cost;
    
    public:

    //constructor
        OvernightPackage(float cost, std::string nameReceiver, std::string addressReceiver);

        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};

#endif