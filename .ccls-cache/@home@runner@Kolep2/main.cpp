#include <iostream>
#include "../library/input.h"
#include "../library/proses.h"
#include "../library/output.h"
#include <fstream>
using namespace std;

int main(){
  Input inp;
  Proses prs;
  inp.input();
  inp.oInput();
  prs.iProses();
  prs.hitung();
  prs.oProses();
  output output;
  output.getData();
  output.cetak();
}