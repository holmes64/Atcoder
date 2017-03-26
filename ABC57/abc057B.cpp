#include <iostream>
#include <math.h>
#include <vector>
using namespace std;;

int main(){
    int n, m;
    cin >> n >> m;
    int n_student[n][2];
    int m_point[m][2];
    // n student
    for(int i=0; i<n; i++){
        cin >> n_student[i][0] >> n_student[i][1];
    }
    // m point
    for(int i=0; i<m; i++){
        cin >> m_point[i][0] >> m_point[i][1];
    }

    int kouho[m];
    int result[n];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            // calc
            kouho[j] = abs(n_student[i][0] - m_point[j][0]) + abs(n_student[i][1] - m_point[j][1]);
        }
        // min
        int temp;
        temp = kouho[0];
        int ind;
        ind = 0;
        for(int k=0;k<m; k++){
   
            if(kouho[k] < temp){
                temp = min(temp,kouho[k]);
                ind = k;
            }
            if(kouho[k] == temp){
                temp = min(temp,kouho[k]);
                ind = min(ind,k);
            }
        }
        result[i] = ind;
    }

    for(int i=0; i<n; i++){
        cout << result[i]+1 << endl;
    }

    return 0;
}