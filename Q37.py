def is_rotation(s, goal):
    if len(s) != len(goal):
        return False
    return goal in (s + s)

s = input()
goal = input()

if is_rotation(s, goal):
    print("true")
else:
    print("false")
