//
//  main.cpp
//  join_Thread_Example
//
//  Created by Balachandhar on 2018-10-12.
//  Copyright © 2018 Balachandhar. All rights reserved.
//

#include <iostream>
#include<thread>
#include<chrono>

void threadSpawn(int n) {
    std::this_thread::sleep_for (std::chrono::seconds(n));
    std::cout<<"This thread slept for "<<n<<std::endl;
}


int main(int argc, const char * argv[]) {
    
    std::thread th1(threadSpawn, 10);
    std::thread th2(threadSpawn, 20);
    std::thread th3(threadSpawn, 30);
    std::thread th4(threadSpawn, 40);
    std::thread th5(threadSpawn, 50);
    std::thread th6(threadSpawn, 60);
    std::thread th7(threadSpawn, 70);
    std::thread th8(threadSpawn, 80);
    std::thread th9(threadSpawn, 90);
    std::thread th10(threadSpawn, 100);
    
    th1.join();
    th2.join();
    th3.join();
    th4.join();
    th5.join();
    th6.join();
    th7.join();
    th8.join();
    th9.join();
    th10.join();

    return 0;
}
