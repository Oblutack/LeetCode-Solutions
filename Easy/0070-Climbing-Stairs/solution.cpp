int climbStairs(int n) {
    int curr = 2;
    int prev = 1;
    int result;

    if(n<=2)
        return n;

    for(int i=3;i<=n;i++){
        result = curr+prev;
        prev = curr;
        curr = result;
    }

    return curr;
}