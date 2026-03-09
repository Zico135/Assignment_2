#include "OvernightPackage.h"
#include <iostream>



OvernightPackage : public Package {
    private:
        float Cost;
    
    public:
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};