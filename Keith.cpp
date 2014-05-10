/*
 CSE 220 EC
 
 Charles Crow (LevenBravo)
 Mike Mayr (MMayr15)
 
 
 */


#include <iostream>
#include <math.h>
#include <stdio.h>

#include "Thread.hpp"
#include "Main.hpp"
#include "Types.hpp"

using namespace std;

static bool IsKeith(ulong const pNum);

void FindKeiths(ulong PLimit)
{
    if(GetVerbose()) cout << "FindKeiths() Begin" << endl;
    for(ulong pNum = 10; PNum<= pLimit; pNum++)
    {
        if(IsKeith(pNum);
    }
           if(GetVerbose()) cout<< "FindKeiths() End" << endl;
}

Void *FindKeithsThread(Void *pState)
{
    //copied from Amicable.cpp
    if(GetVerbose()) printf("FindKeithsThread() Begin\n");
    ThreadState *state = static_cast<ThreadState *>(pState)
    FindKeiths(state->mLimit);
    state->mExitCode = 0;
    if(GetVerbose()) cout << "FindKeithsThread() End" << endl;
    pthread_exit(pState);
}

static bool IsKeith(ulong pNum)
{
    ulong num = pNUm;
    int numSize = 0;
    int sum = 0;
    
    while(num > 0)
    {
        num = num/10;
        numSize++;
    }
    
    int pNumArray[numSize];
    num = pNum;
    int i;
    for(i=numSize - 1; i>=0; i--)
    {
        pNumArray[i] = num % 10;
        num /= 10;
    }
    
    while(sum <= pNum)
    {
        sum = 0;
        for(i=0; i<numSize; i++)
        {
            sum += pNumArray[i];
        }
        for(i=0; i< numSize; i++)
        {
            pNumArray[i] = pNumArray[i+1];
        }
        
        pNumArray[numSize-1] = sum;
        
        if(sum == pNum)
        {
            return true;
        }
    }
    
    return false;
    /*
     return true if pNum is a Kieth false if not
     -break input into array
     -store last two numbers and sum
     -loop until greater than pNum
     */
}
