#include <vector>

class Solution {
public:
    std::vector<int> getRow(int rowIndex) {

        std::vector<int> previous;
        std::vector<int> current;
        previous.push_back(1);

        for (int i=1;i<=rowIndex;i++){

            current.clear();

            for(int j=0;j<i+1;j++){

                if(j==0){
                    current.push_back(1);}

                else if (j==i){
                    current.push_back(1);}
                else{
                    int element;
                    element = previous.at(j)+previous.at(j-1);
                    current.push_back(element);
                }
            }

            previous = current;
        }

        return previous;
    }
};