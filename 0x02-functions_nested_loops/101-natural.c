def sum_multiples_3_or_5(limit):
    total = 0
    for num in range(limit):
        if num % 3 == 0 or num % 5 == 0:
            total += num
    return total

limit = 1024
result = sum_multiples_3_or_5(limit)
print(result)
