#include "Package.h"
#ifndef TWO_DAY_PACKAGE_H
#define TWO_DAY_PACKAGE_H

class TwoDayPackage : public Package {
    private:
        float Cost;
    
    public:
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};

#endif