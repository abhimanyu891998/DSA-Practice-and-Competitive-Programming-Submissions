//https://www.interviewbit.com/problems/equal/
from collections import defaultdict
from heapq import heappush, heappop


class Solution:
    # @param A : list of integers
    # @return a list of integers
    def equal(self, A):
        pairs_by_sum = defaultdict(lambda: None)
        solutions = []
    
        for i in range(len(A)):
            for j in range(i + 1, len(A)):
                cur_sum = A[i] + A[j]
                if pairs_by_sum[cur_sum]:
                    i0, j0 = pairs_by_sum[cur_sum]
                    if i0 < i and j0 != i and j0 != j:
                        heappush(solutions, tuple([i0, j0] + [i, j]))
                        pairs_by_sum[cur_sum] = None
                else:
                    pairs_by_sum[cur_sum] = [i, j]

        return heappop(solutions) if solutions else []