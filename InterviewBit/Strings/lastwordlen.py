class Solution:
    # @param A : string
    # @return an integer
    def lengthOfLastWord(self, A):
        array = A.split()
        if(len(array)==0):
            return 0
        else:
            return(len(array[-1]))
