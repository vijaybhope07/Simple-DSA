# classic house robber problem solved using dp with space optimisation.
def rob(self, nums):
    n=len(nums)

    dp2=0
    dp1=nums[n-1]

    for i in range(n-2,-1,-1):
        take=nums[i]+dp2
        leave=dp1

        curr=max(take,leave)
        dp2=dp1
        dp1=curr

    return dp1  