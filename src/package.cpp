#include "Package.h"
#include <iostream>
#include <string>


class Package {
    private:
        std::string senderName;
        std::string recipientName;
        std::string senderAddress;
        std::string recipientAddress;
        
    
    public:
        void setSenderName(const std::string& nameSender);
        std::string setSenderName();
        void setRecipientName(const std::string& nameRecipient);
        std::string setRecipientName();
        void setSenderAddress(const std::string& addressSender);
        std::string setSenderAddress();
        void setRecipientAddress(const std::string& addressRecipient);
        std::string setRecipientAddress();
        void setWeight(float weightPackage);
        float setWeight();
        void printInfo();
        float calculateCost(float weightPackage);



    protected:
        float weight;

};