def length_of_longest_substring(s):
    seen = {}
    left = 0
    max_length = 0

    for right in range(len(s)):
        if s[right] in seen and seen[s[right]] >= left:
            left = seen[s[right]] + 1

        seen[s[right]] = right
        max_length = max(max_length, right - left + 1)

    return max_length


s = input()
print(length_of_longest_substring(s))
