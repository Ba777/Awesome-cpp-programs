//
//  main.cpp
//  detach_Thread_Example
//
//  Created by Balachandhar on 2018-10-11.
//  Copyright © 2018 Balachandhar. 
//

#include <iostream>
#include<thread>
#include<chrono>

void pause_thread(int n) {
    std::this_thread::sleep_for(std::chrono::seconds(n));
    std::cout<<"Thread paused for "<<n<<"seconds"<<std::endl;;
}


int main(int argc, const char * argv[]) {
    
    std::cout<<"Spawning and detaching 3 threads....."<<std::endl;
    std::thread(pause_thread,1).detach();
    std::thread(pause_thread,2).detach();
    std::thread(pause_thread,3).detach();
    
    std::cout<<"The main thread will now wait for 10 seconds..."<<std::endl;
    pause_thread(10);
    return 0;
}
