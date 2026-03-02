//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Create 2 lists and fill them with characters from strings. 
//         Then create 2 new strings and concatenate them with thhe second list.
//==================================================================================================

#include "../include/List.h"

int main() { 
    //Generating 2 empty lists 
    List<char> list1;
    List<char> list2;
    //Creating input strings
    std::string input1{"singlylinkedlist"};
    std::string input2{"abcdefg"};
    //Filling lists with inputs
    list1.fillList(input1);
    list2.fillList(input2);
    //Printing lists
    std::cout << "list1:\n";
    list1.print();
    std::cout << "list2:\n";
    list2.print();
    
    //Generating 2 more empty lists
    List<char> list3;
    List<char> list4;
    //Creating input strings
    std::string input3{"hijklmnop"};
    std::string input4{"qrstuvwxyz"};
    //Filling lists with inputs
    list3.fillList(input3);
    list4.fillList(input4);
    //Concatinating list2 with list3 and list4
    list2.concatenate(list3);
    list2.concatenate(list4);
    //Printing results
    std::cout << "list2 after concatenation:\n";
    list2.print();
    return 0;
}
