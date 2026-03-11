#include "Package.h"


Package::Package(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_){
    senderName = senderName_;
    recipientName = recipientName_;
    senderAddress = senderAddress_;
    recipientAddress = recipientAddress_;
    weight = weight_;
}

//Set the name of the sender
void Package::setSenderName(const std::string& nameSender){
    senderName = nameSender;
}

//Get the name of the sender
std::string Package::getSenderName(){
    return senderName;
}

//Set the name of the recipient
void Package::setRecipientName(const std::string& nameRecipient){
    recipientName = nameRecipient;
}

//Get the name of the recipient
std::string Package::getRecipientName(){
    return recipientName;
}

//Set the address of the sender
void Package::setSenderAddress(const std::string& addressSender){
    senderAddress = addressSender;
}

//Get the address of the sender
std::string Package::getSenderAddress(){
    return senderAddress;
}

//Set the address of the recipient
void Package::setRecipientAddress(const std::string& addressRecipient){
    recipientAddress = addressRecipient;
}

//Get the address of the recipient
std::string Package::getRecipientAddress(){
    return recipientAddress;
}

//Set the weight of the package
void Package::setWeight(float weightPackage){
    weight = weightPackage;
}

//Get the weight of the package
float Package::getWeight(){
    return weight;
}

void Package::printInfo(){
    std::cout << "Sender: " << senderName << ", Sender Address: " << senderAddress << std::endl;
    std::cout << "Recipient: " << recipientName << ", Recipient Address: " << recipientAddress << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
}

float Package::calculateCost(float weightPackage){
    std::cout << "Error, you have not specified which shipment type you want(cost too large for your broke ass) " << std::endl;
    return 0; // 
}

static void printCost(const std::list<Package>& packages) {
    for (const auto& package : packages) {
        float cost = package.calculateCost();
        std::cout << "Package from " << package.getSenderName() << " to " << package.getReceiverName() 
                  << " costs: €" << cost << std::endl;
    }
}