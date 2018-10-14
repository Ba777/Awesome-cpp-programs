//
//  main.cpp
//  binary_search_Example
//
//  Created by Balachandhar on 2018-10-13.
//  Copyright © 2018 Balachandhar. 
//

#include <iostream>
#include <algorithm>
#include <vector>


bool myfunction(int i, int j) {
    return i < j;
}


int main(int argc, const char * argv[]) {
    std::vector<int> myvec = {1,2,3,4,5,6,7,8,9,10};
    
    if(std::binary_search(myvec.begin(), myvec.end(),3)) {
        std::cout<<"The given number is in the vector"<<std::endl;
    }
    
    std::sort (myvec.begin(), myvec.end(), myfunction);
    
    if(std::binary_search(myvec.begin(), myvec.end(), 3, myfunction)) {
        std::cout<<"The given number is in the vector"<<std::endl;
    }
    return 0;
}
