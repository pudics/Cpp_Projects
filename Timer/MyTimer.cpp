#include <iostream>
#include <chrono>
#include "MyTimer.h"



MyTimer::MyTimer()
{
    m_StartTime = std::chrono::high_resolution_clock::now();
}

MyTimer::~MyTimer()
{
    MyTimer::Stop();
}

void MyTimer::Stop()
{
    auto endTime = std::chrono::high_resolution_clock::now();
    
    auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTime).time_since_epoch().count();
    auto end = std::chrono::time_point_cast<std::chrono::microseconds>(endTime).time_since_epoch().count();

    auto duration = end - start;

    double millisec = duration * 0.001;

    std::cout << duration << "us" << std::endl;
    std::cout << millisec << "ms" << std::endl;
}