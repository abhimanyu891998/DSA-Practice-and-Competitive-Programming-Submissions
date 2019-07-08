vector<int> Solution::searchRange(const vector<int> &A, int x) {
// Do not write main() function.
// Do not read input, instead use the arguments to the function.
// Do not print the output, instead return values as specified
// Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

int start = 0, end = A.size() - 1, mid;
vector<int> result(2, -1);
while(start <= end){
    mid = start + (end - start) / 2;
    if(A[mid] == x){
        result[0] = mid;
        end = mid - 1;
    }
    else if(A[mid] < x){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
}

if(result[0] == -1)
    return result;

start = result[0];
end = A.size() - 1;
while(start <= end){
    mid = start + (end - start) / 2;
    if(A[mid] == x){
        result[1] = mid;
        start = mid + 1;
    }
    else if(A[mid] < x){
        start = mid + 1;
    }
    else{
        end = mid - 1;
    }
}
return result;
}