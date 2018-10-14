//
//  main.cpp
//  adjacent_find_example
//
//  Created by Balachandhar on 2018-10-13.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char * argv[]) {
    
    int myints[] = {1,1,3,3,5,6,7,9,9};
    
    std::vector<int> myvec(myints, myints+9);
    std::vector<int>::iterator it;
    
    // Iterate through the vector.
    for(it = myvec.begin(); it != myvec.end(); it++) {
        std::cout<<*it<<std::endl;
    }
    
    //Find the adjacent repeated elements.
    it = std::adjacent_find(myvec.begin(), myvec.end());

    while(it != myvec.end()) {
        std::cout<<"repeated elements: "<<*it<<std::endl;
        it = std::adjacent_find (++it, myvec.end());
    }
    return 0;
}
