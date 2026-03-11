//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Defines the functions of the Package class
//==================================================================================================

#include "Package.h"

//Constructor, assigns inputs to the attributes of the package class
Package::Package(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_){
    senderName = senderName_;
    recipientName = recipientName_;
    senderAddress = senderAddress_;
    recipientAddress = recipientAddress_;
    weight = weight_;
}

//Set the name of the sender (not used)
void Package::setSenderName(const std::string& nameSender){
    senderName = nameSender;
}

//Get the name of the sender (not used)
std::string Package::getSenderName(){
    return senderName;
}

//Set the name of the recipient (not used)
void Package::setRecipientName(const std::string& nameRecipient){
    recipientName = nameRecipient;
}

//Get the name of the recipient (not used)
std::string Package::getRecipientName(){
    return recipientName;
}

//Set the address of the sender (not used)
void Package::setSenderAddress(const std::string& addressSender){
    senderAddress = addressSender;
}

//Get the address of the sender (not used)
std::string Package::getSenderAddress(){
    return senderAddress;
}

//Set the address of the recipient (not used)
void Package::setRecipientAddress(const std::string& addressRecipient){
    recipientAddress = addressRecipient;
}

//Get the address of the recipient (not used)
std::string Package::getRecipientAddress(){
    return recipientAddress;
}

//Set the weight of the package (not used)
void Package::setWeight(float weightPackage){
    weight = weightPackage;
}

//Get the weight of the package (not used)
float Package::getWeight(){
    return weight;
}

//Initial printInfo function which is later overwritten by subclasses
void Package::printInfo(){
    std::cout << "Sender: " << senderName << ", Sender Address: " << senderAddress << std::endl;
    std::cout << "Recipient: " << recipientName << ", Recipient Address: " << recipientAddress << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
}

//Initial calculateCost function which is later overwritten by subclasses. If this function is called without overwriting, it is an error.
float Package::calculateCost(){
    std::cout << "Error, you have not specified which shipment type you want(cost too large for your broke ass) " << std::endl;
    return 0; // 
}

//PrintCost function which is not dependent on the class
void Package::printCost(const std::list<Package*>& packages) {
    //Loop over all packages in package
    for (const auto& package : packages) {
        //Calculate the cost of current package
        float cost = package->calculateCost();
        //Round the cost to 2 decimals, since we cant charge smaller than cents
        float cost_rounded = std::round(cost * 100.0) / 100.0;
        //Print the info to show what package it is and what the cost is
        std::cout << "The package with info:" << std::endl;
        package->printInfo();
        std::cout << " costs: " << cost_rounded << " Euros" << std::endl;
        std::cout << "===========================================================" << std::endl;
        std::cout << std::endl;
    }
}