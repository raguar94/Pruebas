/* Para este problema se utiliza la formula de Euclid para generar la tripleta
de Pitagoras. Euclid dice que la tripleta de valores puede ser calculada
apartir de dos constanstes m y n de la siguiente forma:
a = m² - n²
b = 2mn
c = m² + n²
*/
#include <iostream>
using namespace std;
int main(){
    unsigned int x,d,m,n;
    long c;
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> d;
        m = 2;
        n = 1;
        int flag = 0;
        while (flag == 0){
            while (m*m+m*n < d/2){
                n += 1;
            }
            if (m*m+m*n == d/2 && m>n){
                flag = 1;
            } 
            else {
                    m += 1;
                    n = 1;
            }
        }
        c = m*m+n*n;
        c = c*c;
        cout << c << " ";
    }
}
