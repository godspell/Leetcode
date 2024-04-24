class Solution(object):
    def tribonacci(self, n):
        if n == 0 or n == 1:
            return n
        dp = [0] * (n + 1)
        dp[0], dp[1], dp[2] = 0, 1, 1

        for i in range(3, n + 1):
            dp[i] = dp[i-1] + dp[i-2] + dp[i-3]
        
        return dp[n]
        