class Solution:
    def kthCharacter(self, k: int) -> str:
        s = 'a'
        while len(s) < k:
            temp = ''
            for ch in s:
                next_ch = 'a' if ch == 'z' else chr(ord(ch) + 1)
                temp += next_ch
            s += temp
        return s[k - 1]
