#include <vector>

class Solution {
public:
    std::vector<std::vector<int>> generate(int numRows) {

        std::vector<std::vector<int>> triangle;
        triangle.push_back({1});

        for ( int i=1;i<numRows;i++){

            std::vector<int> current;

            for(int j=0;j<i+1;j++){

                if(j==0){
                    current.push_back(1);}

                else if (j==i){
                    current.push_back(1);}
                else{
                    int element;
                    element = triangle.at(i-1).at(j) + triangle.at(i-1).at(j-1);
                    current.push_back(element);
                }
            }

            triangle.push_back(current);
        }

        return triangle;
    }
};