//
//  main.cpp
//  any_of_algorithm_Example
//
//  Created by Balachandhar on 2018-10-13.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> myvec = {1,2,3,4,5,6,7,8,9,-10};
    
    if(any_of(myvec.begin(), myvec.end(), [](int i){return i<0;})) {
        std::cout<<"There are some negative numbers in the vector."<<std::endl;
    }
    
    return 0;
}
