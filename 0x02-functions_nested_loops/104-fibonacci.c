def fibonacci_sequence(n):
    fib_sequence = []
    a, b = 1, 2
    fib_sequence.append(a)
    fib_sequence.append(b)
    
    for i in range(2, n):
        c = a + b
        fib_sequence.append(c)
        a = b
        b = c
    
    return fib_sequence

fibonacci_numbers = fibonacci_sequence(98)
fibonacci_string = ', '.join(map(str, fibonacci_numbers))
print(fibonacci_string)
