#pragma once

#include <chrono>



class MyTimer
{
public:
	MyTimer();
	~MyTimer();

    void Stop();

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_StartTime;
};