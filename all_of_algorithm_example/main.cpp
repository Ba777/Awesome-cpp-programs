//
//  main.cpp
//  all_of_algorithm_example
//
//  Created by Balachandhar on 2018-10-12.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

// all_of example
#include <iostream>     // std::cout
#include <algorithm>    // std::all_of
#include <array>        // std::array
#include<vector>

int main () {
    std::array<int,8> foo = {3,5,7,11,13,17,19,23};
    
    if ( std::all_of(foo.begin(), foo.end(),[](int i){return i%2;}) )
        std::cout << "All the elements are odd numbers.\n";
    
    
    std::vector<int> vec(10,2);
    
    std::all_of(vec.cbegin(), vec.cend(), [](int i){return i%2 == 0;})?
        std::cout<<"All numbers are even"<<std::endl:
        std::cout<<"All numbers are not positive numbers"<<std::endl;
    
    return 0;
}
