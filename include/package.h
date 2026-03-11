#include <string>

#ifndef PACKAGE_H
#define PACKAGE_H

class Package {
    private:
        std::string senderName;
        std::string recipientName;
        std::string senderAddress;
        std::string recipientAddress;
        
    
    public:
        //constructor
        Package(const std::string senderName, const std::string recipientName, const std::string senderAddress, const std::string recipientAddress, float weight);
        
        
        void SetSenderName(const std::string nameSender);
        std::string GetSenderName();
        void SetRecipientName(const std::string nameRecipient);
        std::string GetRecipientName();
        void SetSenderAddress(const std::string addressSender);
        std::string getSenderAddress();
        void SetRecipientAddress(const std::string addressRecipient);
        std::string GetRecipientAddress();
        void SetWeight(float weightPackage);
        float GetWeight();
        virtual void printInfo();
        virtual float calculateCost(float weight);


    protected:
        float weight;
        float Cost;
        const int FLAT_FEE = 5;
        const float COST_PER_KG = 2.5;
};
#endif