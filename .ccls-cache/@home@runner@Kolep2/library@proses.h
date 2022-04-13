#include <fstream>
using namespace std;

class Proses {
public:
  void iProses();
  void hitung();
  void oProses();

private:
  int tpengeluaran, tabungan, pemasukan, i;
  ifstream getdata;
  ofstream outdata;
};

void Proses::iProses() {
  i = 1;
  getdata.open("../temp_data/temp_data_input.txt");
  while (!getdata.eof()) {
    if (i == 13) {
      getdata >> tpengeluaran;
    } else {
      i++;
    }
  }
  getdata.close();
}

void Proses::hitung() {
  pemasukan = 2000000;
  pemasukan *= 12;
  tabungan = pemasukan - tpengeluaran;
}

void Proses::oProses() {
  outdata.open("../temp_data/temp_data_proses.txt");
  outdata << tabungan;
  outdata.close();
}
