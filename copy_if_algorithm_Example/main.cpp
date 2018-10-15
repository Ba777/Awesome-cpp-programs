//
//  main.cpp
//  copy_if_algorithm_Example
//
//  Created by Balachandhar on 2018-10-15.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char * argv[]) {
    
    std::vector<int> myvec;
    for(int i = 1; i <= 10; i++) {
        myvec.push_back(i);
    }
    
    std::vector<int> myvec1(myvec.size());
    
    std::vector<int>::iterator it = std::copy_if(myvec.begin(), myvec.end(), myvec1.begin(), [](int i) {return !(i<0);});
    myvec1.resize(std::distance(myvec1.begin(),it));  // shrink container to new size

    std::cout << "Myvec1 contains:";
    for (int& x: myvec1) std::cout << ' ' << x;
    std::cout << '\n';
    return 0;
}
