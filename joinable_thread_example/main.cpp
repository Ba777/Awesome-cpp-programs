//
//  main.cpp
//  joinable_thread_example
//
//  Created by Balachandhar on 2018-10-12.
//  Copyright © 2018 Balachandhar. 
//

#include <iostream>
#include<thread>

int main(int argc, const char * argv[]) {
    
    std::thread th1;
    std::thread th2;
    
    if(th1.joinable()) {
        th1.join();
    }
    if(th2.joinable()) {
        th2.join();
    }
    return 0;
}
