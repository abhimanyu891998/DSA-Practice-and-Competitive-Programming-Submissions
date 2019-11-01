#https://www.interviewbit.com/problems/evaluate-expression/

class Solution:
	# @param A : list of strings
	# @return an integer
	def evalRPN(self, A):
	    stack = []
	    operators = ["+", "-", "/", "*"]
	    for a in A:
	        if a not in operators:
	            stack.append(a)
	            
            else:
                stack.append(a)
                operator = stack.pop()
                second = stack.pop()
                first = stack.pop()
                if(operator == "+"):
                    stack.append(int(first) + int(second))
                    
                elif(operator == "-"):
                    stack.append(int(first) - int(second))   
                    
                elif(operator == "*"):
                    stack.append(int(first) * int(second))
                    
                else:
                    stack.append(int(first) / int(second))
                    
        return int(stack.pop())
                