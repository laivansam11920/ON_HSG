n, q = map(int, input().split())

per = [0] * (n + 1)

_list = tuple(map(int, input().split()))

for i in range(1, n + 1):
    is_even = 1 if _list[i - 1] % 2 == 0 else 0
    per[i] = per[i - 1] + is_even

for _ in range(q):
    l, r = map(int, input().split())
    print(per[r] - per[l - 1])