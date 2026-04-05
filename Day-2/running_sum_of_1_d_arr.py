def runningSum(nums):
    n = len(nums)
    i = 0
    total = 0

    while i < n:
        total += nums[i]
        nums[i] = total
        i += 1

    return nums


if __name__ == "__main__":
    nums = [1, 2, 3, 4]

    result = runningSum(nums)

    print("Running Sum:", result)