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

// membuat prosedur input 
void input(){
    cout <<"masukkan berat badan (kg) = ";
    cin >> NilBB;
    cout <<"masukkan tinggi badan (meter) = ";
    cin >> NilTB;
}

// program utama
int main() {
    cout <<"--- Selamat datang mahasiswa kelas B 2026 ---"<<endl;
    input();
    float x = perhitungan_bmi(NilBB, NilTB);
    cout <<"--- Hasil ---" <<endl;
    cout << "BMI Anda = " <<perhitungan_bmi(NilBB, NilTB) <<endl; 
    cout << "dengan status = " <<bmi(x) <<endl;
}