// menambahkan library
#include <iostream>
using namespace std;

// mendeklarasikan variable
float NilBB, NilTB ;

// membuat fungsi perhitungan bmi
float perhitungan_bmi(float a,float b){
    return a/(b*b);
}

// membuat fungsi pengkategorian bmi
string bmi (float r){
    if (r < 18.5)
        return "berat badan kurang";
    else{
        if (r <= 25.00){
            return "berat badan normal";
        }
        else {
            if (r < 30){
                return "kelebihan berat badan";
            }
            else {
                return "obesitas";
            }
        }
    }
}