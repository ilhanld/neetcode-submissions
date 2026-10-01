class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        map = {}
        for c in s:
            if map.get(c, 0):
                map[c] += 1
            else:
                map[c] = 1
        for c in t:
            if map.get(c, 0):
                map[c] -= 1
            else:
                map[c] = 1
        for k, v in map.items():
            print(k, v)
        for k in map: 
            if map[k] > 0:
                return False
        return True