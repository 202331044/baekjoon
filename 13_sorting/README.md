# Step 13 - 정렬
## Summary
- Total Solved: 11

---

## Problem List

### 1. 2750 수 정렬하기
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used `std::sort` to sort numbers.
  - 2nd solution: Implemented insertion sort.
  - 3rd solution: Implemented bubble sort.

### 2. 2587 대표값2
- Time: N/A
- Solved by Myself: Yes

### 3. 25305 커트라인
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used `std::sort` to sort numbers.
  - 2nd solution: Used `std::nth_element` to find the k-th largest number.

### 4. 2751 수 정렬하기 2
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used `std::sort` to sort numbers.
  - 2nd solution: Implemented merge sort.
  - 3rd solution: Implemented heap sort.
  - merge sort, heap sort: worst O(nlogn).
  - quick sort: average O(nlogn), worst O(n^2).

### 5. 10989 수 정렬하기 3
- Time: N/A
- Solved by Myself: Yes

### 6. 1427 소트인사이드
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Converted each character to integer and sorted.
  - 2nd solution: Sorted string directly.
 
### 7. 11650 좌표 정렬하기
- Time: N/A
- Solved by Myself: Yes
 
### 8. 11651 좌표 정렬하기 2
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used cmp function to sort by y, then x.
  - 2nd solution: Used lambda function to sort by y, then x.

### 9. 1181 단어 정렬
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used `std::unordered_map` to remove duplicate words.
  - 2nd solution: Used `std::unique` and `std::vector::erase` to remove duplicate words.

 ### 10. 10814 나이순 정렬
- Time: N/A
- Solved by Myself: No
- Notes:
  - Initially stored age as a string, which caused incorrect sorting results.
  - Fixed the issue by changing the age type to `int`
 
### 11. 18870 좌표압축
- Time: N/A
- Solved by Myself: Yes
- Notes:
  - 1st solution: Used `std::unordered_map` to map each value to its compressed index.
  - 2nd solution: Used sorting + `std::unique` + `std::vector::erase` to remove duplicate values, then applied `std::lower_bound` to compute compressed indices.
  
---
