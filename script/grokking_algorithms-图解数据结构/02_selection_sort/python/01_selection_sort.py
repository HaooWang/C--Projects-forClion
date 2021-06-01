import numpy as np

# Finds the smallest value in an array
def findSmallest(arr):
  # Stores the smallest value
  smallest = arr[0]
  # Stores the index of the smallest value
  smallest_index = 0
  for i in range(1, len(arr)):
    if arr[i] < smallest:
      smallest_index = i
      smallest = arr[i]      
  return smallest_index

# Sort array
def selectionSort(arr):
  newArr = []
  for i in range(len(arr)):
      # Finds the smallest element in the array and adds it to the new array
      smallest = findSmallest(arr)
      newArr.append(arr.pop(smallest))
  return newArr
np.random.seed(20)
data = np.random.randint(1,1000, size=(1,200))
LT = selectionSort([356,475,272,224,925,219,394,405,844,791,584,163,993,119,553,470,475,795,
  764 ,980 ,785, 766 ,743,743 ,191, 145, 618, 870 ,776, 486 ,256 ,995 ,  7 ,283 ,654 ,972,
  955 ,538 ,900 ,715 ,204, 830 ,974 ,852, 442, 479, 879, 289 ,779, 775, 844,275 ,260 ,510,
  974 ,402 ,7,61  ,44, 1,45 ,78,7 , 80, 9,87 ,700, 96,8 ,588 ,11,9, 4,14, 430, 519 ,704 ,847 ,793])
print(LT)