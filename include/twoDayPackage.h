//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : The header of the twodayPackage class, which inherits from the package class.
//==================================================================================================

#include "Package.h"
#ifndef TWO_DAY_PACKAGE_H
#define TWO_DAY_PACKAGE_H

// define class and inherit package class
class TwoDayPackage : public Package {
    private:

    public:
        //Constructor
        TwoDayPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight);
               
        //Destructor
        ~TwoDayPackage() {};
        
        //Overwrite the function in Package.h
        virtual void printInfo() override;
        //Overwrite the function in Package.h
        virtual float calculateCost() override;
};

#endif