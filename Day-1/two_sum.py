def twoSum(nums, target):
    n = len(nums)
    arr = []

    for i in range(n):
        arr.append((nums[i], i))

    arr.sort()

    i, j = 0, n - 1

    while i < j:
        ps = arr[i][0] + arr[j][0]

        if ps == target:
            return [arr[i][1], arr[j][1]]
        elif ps < target:
            i += 1
        else:
            j -= 1

    return []


if __name__ == "__main__":
    nums = [2, 7, 11, 15]
    target = 9

    result = twoSum(nums, target)

    if result:
        print("Indices:", result)
    else:
        print("No solution found")