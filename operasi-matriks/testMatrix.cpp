#include <cstdlib>
#include <iostream>
using namespace std;
int n,i,j,k,l;
float a[20][20];
void matrixSisiKanan(){
	//Matriks sisi kanan

    for (j=n+1;j<=n+n;j++){
        i=j-n;
        a[i][j]=1;
    }

    for (j=n+1;j<=n+n;j++){
        for (i=1;i<=n;i++)
            if (i!=(j-n)) a[i][j]=0;
    }
}

void inversMatrix(){
	//Proses penginversan
    for (i=1;i<=n;i++){

        for (j=1;j<=n+n;j++){

            if (i!=j) a[i][j]=a[i][j]/a[i][i];
            

        }

        for (j=1;j<=n+n;j++){

            if (i==j) a[i][j]=1;

        }
        //Penjumlahan kesatu baris element
        for (l=1;l<=n;l++){

            if (i!=l) {

                for (j=i+1;j<=n+n;j++){

                    a[l][j]=a[l][j]-(a[i][j]*a[l][i]);

                    }

                }

            }
        //Pembuat nol disekitar matriks kiri
        for (k=1;k<=n;k++){
            if (i!=k) {
                a[k][i]=0;
                }
            }
    }
}
void printInversMatrix(){
	//Pencetakan

    cout <<"Maka invers dari matriks A adalah : "<<endl;

    cout.precision(4);

    cout.setf(ios::fixed);

    for (i=1;i<=n;i++){

        for (j=n+1;j<=n+n;j++)

            cout <<"    "<<a[i][j];

            cout <<endl;

        }
}

void perkalianMatriks(){
	int matriks1[10][10], matriks2[10][10], hasil[10][10];
  	int i, j, k, baris1, kolom1, baris2, kolom2, jumlah = 0;
  	cout << "Masukkan jumlah baris matriks pertama: ";
  	cin >> baris1;
  	cout << "Masukkan jumlah kolom matriks pertama: ";
  	cin >> kolom1;

  	cout << "Masukkan jumlah baris matriks kedua: ";
  	cin >> baris2;
  	cout << "Masukkan jumlah kolom matriks kedua: ";
  	cin >> kolom2;

  	if(kolom1 != baris2){
    	cout << "Matriks tidak dapat dikalikan satu sama lain.\n";
  	} else {

    cout << "Masukkan elemen matriks pertama: \n";
    for(i = 0; i < baris1; i++){
      	for(j = 0; j < kolom1; j++){
        	cin >> matriks1[i][j];
      	}
    }

    cout << "Masukkan elemen matriks kedua: \n";
    for(i = 0; i < baris2; i++){
      	for(j = 0; j < kolom2; j++){
        	cin >> matriks2[i][j];
      	}
    }

    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        for(k = 0; k < baris2; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < baris1; i++){
      for(j = 0; j < kolom2; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }

  	}
}
void menuInvers(){
	cout <<">>> Program Pencarian Invers Matriks Ordo n x n <<<\n    Oleh : ADITYA NOFRIANSYAH. L (F 551 17 050)\n\t   Teknik Informatika Untad"<<endl;
   
    cout <<"====================================================\n";
    cout <<endl<<"Masukkan ordo Matriks A (n x n)"<<endl;

    cout <<"n : ";

    cin >>n;

    cout <<endl;

    for (i=1;i<=n;i++){

        for (j=1;j<=n;j++){

            cout <<"A("<<i<<","<<j<<") : ";

            cin >>a[i][j];

            }

        }

    cout <<endl;

    for (i=1;i<=n;i++){

        for (j=1;j<=n;j++)

            cout <<"    "<<a[i][j];

        cout <<endl;

    }
    matrixSisiKanan();
    inversMatrix();
    printInversMatrix();
}
void penjumlahanMatriks(){
	int i, j, baris1, kolom1, matriks1[10][10], matriks2[10][10], hasil[10][10];

  cout << "Masukkan jumlah baris matriks: ";
  cin >> baris1;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> kolom1;

  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      hasil[i][j] = matriks1[i][j] + matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
}

void penguranganMatriks(){
	int i, j, baris1, kolom1, matriks1[10][10], matriks2[10][10], hasil[10][10];
  cout << "Masukkan jumlah baris matriks: ";
  cin >> baris1;
  cout << "Masukkan jumlah kolom matriks: ";
  cin >> kolom1;

  cout << "Masukkan elemen matrix pertama: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      cin >> matriks1[i][j];
    }
  }
  cout << "Masukkan elemen matrix kedua: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      cin >> matriks2[i][j];
    }
  }
  cout << "hasil penjumlahan matrix: \n";
  for(i = 0; i < baris1; i++){
    for(j = 0; j < kolom1; j++){
      hasil[i][j] = matriks1[i][j] - matriks2[i][j];
      cout << hasil[i][j] << "\t";
    }
    cout << endl;
  }
}
int main(){
	int pilihMenu;
	cout<<"==================================================================================="<<endl;
	cout<<"\t\t\tAplikasi Penghitung Matriks\n\n";
	cout<<"\t\t1. Penjumlahan Matriks"<<endl;
	cout<<"\t\t2. Pengurangan Matriks"<<endl;
	cout<<"\t\t3. Perkalian Matriks"<<endl;
	cout<<"\t\t4. Inverse Matriks"<<endl;
	cout<<"\t\t5. Keluar\n";
	cout<<"===================================================================================\n\n";
	inputMenu:
	cout<<"\t\tMasukan Pilihan Anda : ";
	cin>>pilihMenu;
	cout<<endl;
	if(pilihMenu == 1){
		penjumlahanMatriks();
	}
	else if (pilihMenu == 2){
		penguranganMatriks();
	}
	else if (pilihMenu == 3){
		perkalianMatriks();
	}
	else if (pilihMenu == 4){
		menuInvers();
	}
	else if(pilihMenu == 5){
		cout<<"\t\tTerimakasih telah menggunakan aplikasi ini !!!!";
		return EXIT_SUCCESS;
	}
	else{
		cout<<"\t\tKode yang anda masukan tidak sesuai dengan menu yang tersedia.\n\t\tHarap periksa kembali input anda!!\n\n";
		goto inputMenu;
	}
    system("PAUSE");
    return EXIT_SUCCESS;
}
    
