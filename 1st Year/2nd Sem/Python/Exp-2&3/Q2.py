'''Code to input a list of scores for N students in a list data type. Find the score of 
the runner-up and print the output.

Sample Input 
N = 5 
Scores= 2 3 6 6 5 
Sample output 
5 

Note: 
Given list is [2, 3, 6, 6, 5]. The maximum score is 6, second maximum is 5. Hence, we 
print 5 as the runner-up score.'''

if __name__ == "__main__":
    n = int(input("Enter the number of students: "))
    arr = map(int, input().split())
    arr = list(set(list(arr)))
    ar = len(arr)
    arr = sorted(arr)
    print(arr[ar-2])
