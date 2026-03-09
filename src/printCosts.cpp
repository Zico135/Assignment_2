#include "../include/Inheritance.h"

void printCost(const std::list<Package>& packages) {
    for (const auto& package : packages) {
        float cost = package.calculateCost();
        std::cout << "Package from " << package.getSenderName() << " to " << package.getReceiverName() 
                  << " costs: €" << cost << std::endl;
    }
}