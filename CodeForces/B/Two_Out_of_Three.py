##
######
# https://codeforces.com/contest/1894/problem/B
######
##

def solve():

    for _ in range(int(input())):
        n = int(input())
        a = list(map(int, input().split()))
        b = [1] * n
        inds = {v: [i for i, vv in enumerate(a) if v == vv] for v in a}
        k = 2

        for i in range(1, 101):
            if inds.get(i) and len(inds.get(i)) >= 2:
                b[inds[i][0]] = k
                k += 1
                if k > 3:
                    break

        if k < 4:
            print(-1)
        else:
            print(*b)


if __name__ == '__main__':
    solve()
