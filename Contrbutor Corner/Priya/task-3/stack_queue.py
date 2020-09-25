
def push(x):
    global q1
    global q2

    # append value in the queue2
    q2.append(x)

    while len(q1):
        # insert at back of queue2
        q2.append(q1[0])

        # remove top of queue1
        q1.pop(0) 

    # transfers all elements from queue2 to queue1, by swapping the names
    q1 , q2 = q2 , q1

def pop():
    
    #return: the value of top of stack and pop from it.

    global q1
    global q2
    if len(q1):
        return q1.pop(0)
    else:
        return -1

#Driver's code


import atexit
import io
import sys


_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

queue_1 = [] # first queue
queue_2 = [] # second queue

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        n = int(input())
        a = list(map(int,input().strip().split()))
        i = 0
        while i<len(a):
            if a[i] == 1:
                push_in_stack(a[i+1])
                i+=1
            else:
                print(pop_from_stack(),end=" ")
            i+=1

        # clear both the queues
        queue_1 = []
        queue_2 = []
        print()
        
