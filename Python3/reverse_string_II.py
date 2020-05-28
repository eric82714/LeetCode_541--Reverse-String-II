class Solution:
    def reverseStr(self, s: str, k: int) -> str:
        def reverse(s, pos = 0, length = len(s)):
            s = list(s)
            final = pos + length - 1
            for i in range(length//2):
                tmp = s[pos+i]                
                s[pos+i] = s[final-i]
                s[final-i] = tmp
            return "".join(s)

        for i in range(0, len(s), 2*k):
            if len(s[i:]) < k: s = reverse(s, i, len(s[i:]))
            elif len(s[i:]) >= k and len(s[i:]) < 2*k: s = reverse(s, i, k)
            else:
                s = reverse(s, i, k)
        return s
