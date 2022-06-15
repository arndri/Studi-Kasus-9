#include <iostream>
using namespace std;

class kasus{
  private:
  int baris,kolom;
  string data[100];
  string array2D[50][50];
  
  public:
    void input();//Shaluna Fasya Elmina-229
    void proses();//Andri Pratama-249
    void output();//Dini Rohmah-234

};
//Kapan2 aja temen-temen benerinnya, besok kalo aku sempet deh aku benerin.
void kasus::input(){
  cout<<"Masukkan jumlah baris : "; cin>>baris;
  cout<<"Masukkan jumlah kolom : "; cin>>kolom;
cin.ignore();
    for(int i=0; i<baris*kolom; i++){
    cout<<"Masukkan Data : ";getline(cin,data[i]);
}
}

void kasus::proses(){
  for(int i=0;i<baris;i++){
    for(int j=0;j<kolom;j++){
      array2D[i][j]=data[i*baris+j];
    }
  }
}

void kasus::output(){
  cout<<"____________________________________________________________"<<endl;
  cout<<"| Kelas\t\t\t|"<<" Nim\t\t\t|"<<" Nama\t\t\t |"<<endl;
  for(int i=0; i<baris; i++){
    for(int j=0; j<kolom; j++){
      cout<<" "<<array2D[i][j]<<"\t\t\t|";
    }
    cout<<endl;
  }
  
}

int main() {
  kasus a;
  a.input();
  a.proses();
  a.output();
}