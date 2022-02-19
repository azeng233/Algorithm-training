def gcd(a, b):
    if b:
        return gcd(b, a % b)
    else:
        return a


def main():
    n = int(input())
    list = input()
    list = [int(i) for i in list.split()]

    list.sort()

    md = list[-1] - list[0]
    d = md
    for i in range(n - 1):
        d = gcd(d, list[i + 1] - list[i])

    if d == 0:
        print(n)
    else:
        print(md // d + 1)


if __name__ == '__main__':
    main()