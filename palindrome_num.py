def isPalindrome(x: int) -> bool:
    if x < 0:
        return False
    
    rev = 0
    temp = x
    
    while temp > 0:
        rev = rev * 10 + temp % 10
        temp //= 10  
    
    return x == rev

if __name__ == "__main__":
    x = int(input("Enter number: "))
    
    if isPalindrome(x):
        print("Palindrome")
    else:
        print("Not Palindrome")