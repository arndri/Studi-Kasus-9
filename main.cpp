#include <iostream>
using namespace std;

class kasus{
  private:
  int baris,kolom;
  string NIM[10];
  string nama[10];
  string kelas[10];
  string array2D[50][50];
  
  public:
    void input();
    void proses();
    void output();

};

void kasus::input(){
  cout<<"Masukkan jumlah baris : "; cin>>baris;
  cout<<"Masukkan jumlah kolom : "; cin>>kolom;

  for(int i=0; i<baris; i++){
    cout<<"Masukkan kelas mahasiswa ke-"<<i+1<<" : "; cin>>kelas[i];
  }

  for(int i=0; i<baris; i++){
    cout<<"Masukkan NIM mahasiswa ke-"<<i+1<<" : "; cin>>NIM[i];
  }
  cin.ignore();
  for(int i=0; i<baris; i++){
      cout<<"Masukkan nama mahasiswa ke-"<<i+1<<" : "; getline(cin,nama[i]);
  }

}

void kasus::proses(){
  int a=0,b=1,c=2;
  for(int i=0;i<baris;i++){
    for(int j=0;j<kolom;j++){
      array2D[i][a]=kelas[i];
      array2D[i][b]=NIM[i];
      array2D[i][c]=nama[i];
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