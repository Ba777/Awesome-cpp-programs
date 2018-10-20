//
//  main.cpp
//  copy_algorithm_Example
//
//  Created by Balachandhar on 2018-10-15.
//  Copyright © 2018 Balachandhar. 
//

#include <iostream>
#include <algorithm>
#include <vector>


int main(int argc, const char * argv[]) {
    
    int myints[] = {1,2,3,4,5,6,7};
    std::vector<int> myvec(7);
    std::copy(myints, myints+7, myvec.begin());
    
    std::vector<int>::iterator it;
    
    for(it = myvec.begin(); it != myvec.end(); it++) {
        std::cout<<"Element:" <<*it<< std::endl;
    }
    
    return 0;
}
