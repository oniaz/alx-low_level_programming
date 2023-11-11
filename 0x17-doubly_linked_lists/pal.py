def is_palindrome(number):
    digit_list = [int(digit) for digit in str(number)]
    length = len(digit_list) - 1
    for i in range(length // 2 + 1):
        start = i
        end = length - i
        if digit_list[start] != digit_list[end]:
            return 0
    else:
        return 1
    
big = 0
big_i = 0
big_j = 0
for i in range(1000):
    for j in range(1000):
        number = i * j
        if is_palindrome(number):
            if number > big:
                big = number
                big_i = i
                big_j = j
print(f"The biggest palindrome at: {big_i} * {big_j} = {big}")