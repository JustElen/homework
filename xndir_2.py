n = 10  
arr = [2, -1, 5, 0, 3, -2, 7, 8, -4, 6] 


positive_sum = 0
positive_count = 0


for i in range(n):
    if arr[i] > 0:
        positive_sum += arr[i]  
        positive_count += 1 

if positive_count > 0:
    average = positive_sum / positive_count
    print("Mijin tvabanakan:", average)
else:
    print("Drakan andam chka.")

