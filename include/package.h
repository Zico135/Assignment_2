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
        void SetSenderName(const std::string& nameSender);
        std::string GetSenderName();
        void SetRecipientName(const std::string& nameRecipient);
        std::string GetRecipientName();
        void SetSenderAddress(const std::string& addressSender);
        std::string GetSenderAddress();
        void SetRecipientAddress(const std::string& addressRecipient);
        std::string GetRecipientAddress();
        void SetWeight(float weightPackage);
        float GetWeight();
        void printInfo();
        float calculateCost(float weightPackage);
        void printInfo();


    protected:
        float weight;

};
#endif