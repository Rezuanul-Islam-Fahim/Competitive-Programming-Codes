##
######
# https://codeforces.com/contest/1894/problem/A
######
##

def solve():
    t = int(input())

    while t > 0:
        n = int(input())
        s = str(input())

        print(s[-1])
        t -= 1


if __name__ == '__main__':
    solve()
