// OS_lock.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include<mutex>
#include<stdio.h>
#include<stdlib.h>

int counter = 0;
using namespace std;
mutex mtx;


void print_thread_id(int id)
{
    
    mtx.lock();
    cout << "thread #" << id << " count:" << counter << '\n';
    counter++;
    mtx.unlock();

}

int main()
{
    thread threads[10];
    for (int i = 0; i < 10; ++i)
    {
        threads[i] = thread(print_thread_id, i + 1);                
    }
    for (auto& th : threads)
    {
        th.join();
    }
    return 0;

}

