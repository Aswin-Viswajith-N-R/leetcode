class Solution:
    def findDifference(self, nums1: List[int], nums2: List[int]) -> List[List[int]]:
        arr1 = []
        arr2 =[]
        arr3 = []
        for i in nums1:
            if i not in nums2:
                arr1.append(i)
        for i in nums2:
            if i not in nums1:
                arr2.append(i)
        arr3.append(arr1)
        arr3.append(arr2)
        return [list(set(arr1)), list(set(arr2))]