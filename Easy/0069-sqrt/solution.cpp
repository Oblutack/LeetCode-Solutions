int mySqrt(int x) {
    int left = 0;
    int right = x;
    int ans = 0;
    int middle;

    long long int kvadrat;

    while(left<=right){
        middle = (left+right)/2;
        kvadrat = (long long)middle*middle;
        if(kvadrat == x){
            return middle;
        }
        else if(kvadrat>x){
            right = middle-1;
        }
        else{
            ans = middle;
            left = middle+1;

        }
    }

    return ans;
}