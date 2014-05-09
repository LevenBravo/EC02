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
    //finds Keith nums <= pLimit
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
    /*
     return true if pNum is a Kieth false if not
     -break input into array
     -store last two numbers and sum
     -loop until greater than pNum
     */
}
