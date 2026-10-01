class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        map = {}
        if "".join(sorted(s)) == "".join(sorted(t)):
            return True
        return False      