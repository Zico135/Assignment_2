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
        void SetRecipientName(const std::string& nameRecipient);
        void SetSenderAddress(const std::string& addressSender);
        void SetRecipientAddress(const std::string& addressRecipient);
        


    protected:
        double weight;