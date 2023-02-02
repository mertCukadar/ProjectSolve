import numpy as np

Fibonacci_num_list = [1,2]


i = 0

while Fibonacci_num_list[-1] < 4E6:
    i = Fibonacci_num_list[-1] + Fibonacci_num_list[-2]
    Fibonacci_num_list.append(i)


Fibonacci_num_list = np.array(Fibonacci_num_list)

even_filter = (Fibonacci_num_list % 2 == 0)


sum_under4E6 = np.sum(Fibonacci_num_list[even_filter])

print(f"Sum of under four million even numbers in Fivonacci series is: {sum_under4E6}")
