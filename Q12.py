arr = list(map(int, input().split()))

unique_arr = sorted(set(arr))

if len(unique_arr) < 2:
    print("Second Smallest : -1")
    print("Second Largest : -1")
else:
    print("Second Smallest :", unique_arr[1])
    print("Second Largest :", unique_arr[-2])
