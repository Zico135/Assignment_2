#include "Package.h"

class TwoDayPackage : public Package {
    private:
        float Cost;
    
    public:
        virtual void printInfo() override;
        virtual float calculateCost(float weightPackage) override;
};