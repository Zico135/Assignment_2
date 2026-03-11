//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : The Package class header. This is the base class. It contains the variables for the package and the cost variables and it creates functions
//==================================================================================================


#include <string>
#include <iostream>
#include <list>
#include <cmath>

#ifndef PACKAGE_H
#define PACKAGE_H

//create class
class Package {
    //Protected variables, these are needed in the subclasses, so not private. They are used to calculate the cost of the package
    protected:
        float weight;
        const float exponentialCost = 1.1; // exponential cost factor variable
        const float linearCost = 2.5; // linear cost factor variable
        const float flatFee = 5.0; // flat fee variable
    //Private variables, these are not used outside the class, so private
        private:
        std::string senderName;
        std::string recipientName;
        std::string senderAddress;
        std::string recipientAddress;
        
    //Public functions, these are used everywhere we want.
    public:
        //Constructor
        Package(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_);
        
        //set and get functions to access the variables from outside the class. These are not used for the assignment
        void setSenderName(const std::string& nameSender);
        std::string getSenderName();
        
        void setRecipientName(const std::string& nameRecipient);
        std::string getRecipientName();
        
        void setSenderAddress(const std::string& addressSender);
        std::string getSenderAddress();
        
        void setRecipientAddress(const std::string& addressRecipient);
        std::string getRecipientAddress();
        
        void setWeight(float weightPackage);
        float getWeight();
        
        //Create virtual functions that are later overwritten
        virtual void printInfo();
        virtual float calculateCost();

        //Static function that is not dependent on the class. This is the function that prints the results
        static void printCost(const std::list<Package*>& packages);
};
#endif