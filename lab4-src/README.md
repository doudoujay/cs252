ma438<br> 
Ji Ma

#CS252 Lab4

## Part 1.
### 1.3
The thr1 is generating the ouput of A, B, and C which are generated by main and two other threads. Because the two threads are created first, they normaly generated outputs before the main. 
### 1.5
The only output for the thr2 is bunch of C, which is the only output produced by the main thread. This is because the main has gone into a infinate while loop in the printC function, and never get the chance to create the threads as thr1.

## Part 2
N/A

## Part 3

all the numbers are in the unit of second

|                                          | System  (Kernel) Time | User Time | Real Time |
|------------------------------------------|-----------------------|-----------|-----------|
| pthread_mutex (count)                    | 2.24                  | 2.92      | 2.66      |
| spin lock (count_spin with thr_yield)    | 0.25                  | 0.83      | 0.57      |
| spin_lock (count_spin without thr_yield) | 0.00                  | 6.69      | 3.39      |


1. Explain the differences  in user time between count_spin with and without thr_yield.

The pthread_yield method let the thread to yield(abandon the computing power to other thread) if it can't run to some certain part of codes because of the spin lock. So, this means that other threads that is locking that certain part of code will gain more computing resources, which leads to overall shorter run time. And as a result, when the pthread_yield is not working, the user time takes more compare to system time, which means the threads is wasting a lot of waiting(inefficient!).

2. Explain the difference in system time between count and count_spin with thr_yield.

The reason why the count implementing pthread_mutex takes longer time in Kernal is because it has to handle locking, unlocking, putting thread into queue, and takes out the thread in the queue and get it out of the waiting.
Which takes more time for the syetem to handle.

## Part 4
N/A

