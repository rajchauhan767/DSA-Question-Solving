def longest_common_prefix(strs):
    if not strs:
        return ""

    prefix = strs[0]

    for s in strs[1:]:
        while s.find(prefix) != 0:
            prefix = prefix[:-1]
            if prefix == "":
                return ""

    return prefix


strs = input().split()
print(longest_common_prefix(strs))
