#include <fstream>
using namespace std;
class Input{
  public:
    void input();
    void oInput();
  private:
    int pengeluaran[12];
    int total;
};

void Input::input(){
  total = 0;
  for(int i = 0; i <12;i++){
    cout << "Masukkan pengeluaran bulan ke-"<< i+1 << " : ";
    cin >> pengeluaran[i];
    total += pengeluaran[i];
  }
}

void Input::oInput(){
  ofstream cetak;
  cetak.open("../temp_data/temp_data.txt");
  for( int i=0; i < 12; i++){
    cetak << pengeluaran[i]<<endl;
  }
  cetak<< total;
  cetak.close();
}