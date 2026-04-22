// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    long left = 0;
    long right = A.size() - 1;
    long count = 0;
//loop through array compare values and place them in leftabs and rightabs chane them to long values to prevent overflow
    while(left <= right){
        long leftAbs = abs((long)A[left]);
        long rightAbs = abs((long)A[right]);
        count++ ;
//if the absolute left value is bigger than the right value loop through array find duplicates and skip them
        if(leftAbs > rightAbs){
            while(left <= right && abs((long)A[left]) == leftAbs) {
            left++;}
        }
//if the absolute right value is larger than the left loop throught the array and skip duplicates
        else if(leftAbs < rightAbs){
            while(left<=right && abs((long)A[right])==rightAbs){
            right--;}
        }
//skip duplicates when they are equal
        else {
      while(left <= right && abs((long)A[left]) == leftAbs){
            left++;}
      while(left<=right && abs((long)A[right])==rightAbs){
            right--;}
        }
    }
    return count;
}
