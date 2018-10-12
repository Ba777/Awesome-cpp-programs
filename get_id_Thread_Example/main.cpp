//
//  main.cpp
//  get_id_Thread_Example
//
//  Created by Balachandhar on 2018-10-11.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include<thread>


std::thread::id main_thread_id = std::this_thread::get_id();

void isMainThread() {
    if(main_thread_id == std::this_thread::get_id()) {
        std::cout<<"This is main thread"<<std::endl;
    }
    else {
        std::cout<<"This is not a main thread"<<std::endl;
    }
}

int main(int argc, const char * argv[]) {
    
    isMainThread();
    std::thread th(isMainThread);
    th.join();
    return 0;
}
