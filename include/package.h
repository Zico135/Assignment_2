#include <string>
#include <iostream>
#include <list>

#ifndef PACKAGE_H
#define PACKAGE_H

class Package {
    protected:
        float weight;

    private:
        std::string senderName;
        std::string recipientName;
        std::string senderAddress;
        std::string recipientAddress;
        
    
    public:
        Package(std::string senderName_, std::string recipientName_, std::string senderAddress_, std::string recipientAddress_, float weight_);
        
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
        
        virtual void printInfo();
        virtual float calculateCost(float weightPackage);
        static void printCost(const std::list<Package>& packages);
};
#endif