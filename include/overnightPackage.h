//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : The header of the overnightPackage class, which inherits from the package class. 
//==================================================================================================

#include "Package.h"
#ifndef OVERNIGHT_PACKAGE_H
#define OVERNIGHT_PACKAGE_H

// define class and inherit package class
class OvernightPackage : public Package {
    private:
    
    public:
        //Constructor
        OvernightPackage(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight);
        
        //Overwrite the function in Package.h
        virtual void printInfo() override;
        //Overwrite the function in Package.h
        virtual float calculateCost() override;
};

#endif