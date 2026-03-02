//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : 
//==================================================================================================

#include "../include/List.h"

int main() {  
    List<char> list1;
    List<char> list2;
    std::string input1{"singlylinkedlist"};
    std::string input2{"abcdefg"};
    list1.fillList(list1, input1);
    list2.fillList(list2, input2);
    std::cout << "list1:\n";
    list1.print();
    std::cout << "list2:\n";
    list2.print();
    return 0;
}
