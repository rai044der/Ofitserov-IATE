def fib_mod(n, m):
    value = 0
    value1 = 1
    count = 0
    factor = True
    while value != 0 or (value + value1) % m != 1 or factor:
        value, value1 = value1, (value + value1) % m
        count += 1
        factor = False
    value = 0
    value1 = 1
    n %= count
    if n == 0:
        return 0
    elif n == 1:
        return 1
    n -= 1
    for i in range(n):
        if i % 2 == 0:
            value += value1
        else:
            value1 += value
    return max([value1, value]) % m
    


def main():
    n, m = map(int, input().split())
    print(fib_mod(n, m))


if __name__ == "__main__":
    main()