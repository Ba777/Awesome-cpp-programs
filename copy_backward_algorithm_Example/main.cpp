//
//  main.cpp
//  copy_backward_algorithm_Example
//
//  Created by Balachandhar on 2018-10-15.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> myvec;
    for(int i = 1; i<=10; i++) {
        myvec.push_back(i);
    }
    
    myvec.resize(myvec.size()+5);
    std::copy_backward(myvec.begin(), myvec.begin()+5, myvec.end());
    
    std::vector<int>::iterator it;
    
    for(it = myvec.begin(); it != myvec.end(); it++) {
        std::cout<<*it<<std::endl;
    }
    return 0;
}
