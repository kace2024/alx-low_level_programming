def fibonacci_sum(limit):
    a, b = 1, 2
    sum_even = 0

    while a <= limit:
        if a % 2 == 0:
            sum_even += a
        a, b = b, a + b
    
    return sum_even

limit = 4000000
sum_even = fibonacci_sum(limit)
print(sum_even)
