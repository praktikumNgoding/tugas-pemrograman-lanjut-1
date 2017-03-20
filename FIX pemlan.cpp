#include <iostream>
#include <string.h>
using namespace std;

class perpustakaan{
private:
 string kategori;
public:
 //atribute
 string idBuku;
 string judulBuku;
 string Penerbit;
 string Pengarang;
 string tahunTerbit;
 string jumlahBuku;
 string tanggalPengadaan;
 //method
 string getidBuku(){
 return idBuku;
 }
 string getjudulBuku(){
 return judulBuku;
 }
 string getPenerbit(){
 return Penerbit;
 }
 string getPengarang(){
 return Pengarang;
 }
 string gettahunTerbit(){
 return tahunTerbit;
 }
 string getjumlahBuku(){
 return jumlahBuku;
 }
 string gettanggalPengadaan(){
 return tanggalPengadaan;
 }
};

void agama(){

	//kategoriAgama
	perpustakaan rel1;
	perpustakaan rel2;
	perpustakaan rel3;
	perpustakaan rel4;
	perpustakaan rel5;
	perpustakaan rel6;
	perpustakaan rel7;

	//pengisian kategori Agama
	rel1.idBuku="101";
	rel1.judulBuku="Buku Iqra - Cara cepat baca Quran";
	rel1.Pengarang="KH Asad Humam";
	rel1.tahunTerbit="Februari 1998";
	rel1.jumlahBuku="194 Halaman";
	rel1.tanggalPengadaan="19 Maret 2017";

	rel2.idBuku="102";
	rel2.judulBuku="Kumpulan Doa Sehari-hari untuk anak";
	rel2.Pengarang="Abu Sangkan";
	rel2.tahunTerbit="Mei 2005";
	rel2.jumlahBuku="136 halaman";
	rel2.tanggalPengadaan="21 Deseember 2016";

	rel3.idBuku="103";
	rel3.judulBuku="Cerdas Memilih Jodoh";
	rel3.Pengarang="Zaenal Abidin bin Syarifuddin";
	rel3.tahunTerbit="Maret 2013";
	rel3.jumlahBuku="212 Halaman";
	rel3.tanggalPengadaan="2 Maret 2017";

	rel4.idBuku="104";
	rel4.judulBuku="Sedekah : Cara cepat menjadi kaya";
	rel4.Pengarang="Jamal Abdillah bin Husein Mubarok";
	rel4.tahunTerbit="Janurari 2009";
	rel4.jumlahBuku="314 Halaman";
	rel4.tanggalPengadaan="25 Februari 2017";

	rel5.idBuku="105";
	rel5.judulBuku="Mendidik Anak dengan cara yang baik";
	rel5.Pengarang="Abdul Salam";
	rel5.tahunTerbit="April 2004";
	rel5.jumlahBuku="203 Halaman";
	rel5.tanggalPengadaan="15 Maret 2017";

	rel6.idBuku="106";
	rel6.judulBuku="Mukjizat di waktu subuh";
	rel6.Pengarang="Imam Hamid Al-Fatih";
	rel6.tahunTerbit="Mei 2016";
	rel6.jumlahBuku="403 Halaman";
	rel6.tanggalPengadaan="28 Januari 2017";

	rel7.idBuku="107";
	rel7.judulBuku="Ensiklopedia Religi";
	rel7.Pengarang="Abu Humaira bin Muhammad Hasan";
	rel7.tahunTerbit="September 2006";
	rel7.jumlahBuku="582 Halaman";
	rel7.tanggalPengadaan="3 Februari 2017";

cout<<"============================"<<endl;
cout<<"Kategori Buku Agama"<<endl;
cout<<"============================"<<endl;
cout<<"1. ID Buku :"<<rel1.getidBuku()<<endl
	<<"   Judul Buku: "<<rel1.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel1.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel1.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel1.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel1.gettanggalPengadaan()<<endl;
cout<<"2. ID Buku :"<<rel2.getidBuku()<<endl
	<<"   Judul Buku: "<<rel2.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel2.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel2.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel2.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel2.gettanggalPengadaan()<<endl;
cout<<"3. ID Buku :"<<rel3.getidBuku()<<endl
	<<"   Judul Buku: "<<rel3.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel3.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel3.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel3.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel3.gettanggalPengadaan()<<endl;
cout<<"4. ID Buku :"<<rel4.getidBuku()<<endl
	<<"   Judul Buku: "<<rel4.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel4.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel4.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel4.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel4.gettanggalPengadaan()<<endl;
cout<<"5. ID Buku :"<<rel5.getidBuku()<<endl
	<<"   Judul Buku: "<<rel5.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel5.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel5.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel5.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel5.gettanggalPengadaan()<<endl;
cout<<"6. ID Buku :"<<rel6.getidBuku()<<endl
	<<"   Judul Buku: "<<rel6.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel6.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel6.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel6.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel6.gettanggalPengadaan()<<endl;
cout<<"7. ID Buku :"<<rel7.getidBuku()<<endl
	<<"   Judul Buku: "<<rel7.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<rel7.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<rel7.getPengarang()<<endl
	<<"   Tahun Terbit :"<<rel7.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<rel7.gettanggalPengadaan()<<endl;
}

void filsafat(){

	//kategoriFilsafat
	perpustakaan fil1;
	perpustakaan fil2;
	perpustakaan fil3;
	perpustakaan fil4;
	perpustakaan fil5;
	perpustakaan fil6;
	perpustakaan fil7;

	//pengisian kategori Filsafat
	fil1.idBuku="201";
	fil1.judulBuku="Manusia dan Ego";
	fil1.Pengarang="Fritz Becekenbauer";
	fil1.tahunTerbit="Februari 1997";
	fil1.jumlahBuku="408 Halaman";
	fil1.tanggalPengadaan="10 Maret 2017";

	fil2.idBuku="202";
	fil2.judulBuku="What is Philosophy?";
	fil2.Pengarang="Jean-Pierre Tournesol";
	fil2.tahunTerbit="Mei 2007";
	fil2.jumlahBuku="390 halaman";
	fil2.tanggalPengadaan="25 November 2016";

	fil3.idBuku="203";
	fil3.judulBuku="Aku : Dariku,Olehku dan Untukku";
	fil3.Pengarang="Raden Soetomo";
	fil3.tahunTerbit="Juli 2016";
	fil3.jumlahBuku="275 Halaman";
	fil3.tanggalPengadaan="20 Januari 2017";

	fil4.idBuku="204";
	fil4.judulBuku="Fundamentalisme dalam Umat Manusia";
	fil4.Pengarang="Henry Rousseau";
	fil4.tahunTerbit="Janurari 1994";
	fil4.jumlahBuku="205 Halaman";
	fil4.tanggalPengadaan="4 Februari 2017";

	fil5.idBuku="205";
	fil5.judulBuku="The root of Good and Evil";
	fil5.Pengarang="Benjamin Stewart";
	fil5.tahunTerbit="April 2008";
	fil5.jumlahBuku="194 Halaman";
	fil5.tanggalPengadaan="12 Maret 2017";

	fil6.idBuku="206";
	fil6.judulBuku="Fiksi";
	fil6.Pengarang="John Goodman Jr.";
	fil6.tahunTerbit="September 1999";
	fil6.jumlahBuku="512 Halaman";
	fil6.tanggalPengadaan="24 Januari 2017";

	fil7.idBuku="207";
	fil7.judulBuku="A Beautiful Mind";
	fil7.Pengarang="Issa Khawarizmi";
	fil7.tahunTerbit="September 2015";
	fil7.jumlahBuku="582 Halaman";
	fil7.tanggalPengadaan="3 Februari 2017";

cout<<"============================"<<endl;
cout<<"Kategori Buku Filsafat"<<endl;
cout<<"============================"<<endl;
cout<<"1. ID Buku :"<<fil1.getidBuku()<<endl
	<<"   Judul Buku: "<<fil1.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil1.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil1.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil1.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil1.gettanggalPengadaan()<<endl;
cout<<"2. ID Buku :"<<fil2.getidBuku()<<endl
	<<"   Judul Buku: "<<fil2.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil2.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil2.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil2.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil2.gettanggalPengadaan()<<endl;
cout<<"3. ID Buku :"<<fil3.getidBuku()<<endl
	<<"   Judul Buku: "<<fil3.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil3.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil3.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil3.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil3.gettanggalPengadaan()<<endl;
cout<<"4. ID Buku :"<<fil4.getidBuku()<<endl
	<<"   Judul Buku: "<<fil4.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil4.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil4.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil4.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil4.gettanggalPengadaan()<<endl;
cout<<"5. ID Buku :"<<fil5.getidBuku()<<endl
	<<"   Judul Buku: "<<fil5.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil5.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil5.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil5.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil5.gettanggalPengadaan()<<endl;
cout<<"6. ID Buku :"<<fil6.getidBuku()<<endl
	<<"   Judul Buku: "<<fil6.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil6.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil6.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil6.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil6.gettanggalPengadaan()<<endl;
cout<<"7. ID Buku :"<<fil7.getidBuku()<<endl
	<<"   Judul Buku: "<<fil7.getjudulBuku()<<endl
	<<"   Jumlah Halaman :"<<fil7.getjumlahBuku()<<endl
 	<<"   Pengarang :"<<fil7.getPengarang()<<endl
	<<"   Tahun Terbit :"<<fil7.gettahunTerbit()<<endl
	<<"   Tanggal Pengadaan :"<<fil7.gettanggalPengadaan()<<endl;
}

void teknologi(){

 //kategoriTeknologi
 perpustakaan tek1;
 perpustakaan tek2;
 perpustakaan tek3;
 perpustakaan tek4;
 perpustakaan tek5;
 perpustakaan tek6;
 perpustakaan tek7;

 //pengisian kategori Teknologi
 tek1.idBuku="301";
 tek1.judulBuku="Basis Data";
 tek1.Penerbit="Informatika";
 tek1.Pengarang="Fathansyah";
 tek1.tahunTerbit="Juli 2012";
 tek1.jumlahBuku="532 Halaman";
 tek1.tanggalPengadaan="1 Maret 2017";

 tek2.idBuku="302";
 tek2.judulBuku="Jaringan Komputer";
 tek2.Penerbit="Informatika";
 tek2.Pengarang="Kholili \n       Fatimah";
 tek2.tahunTerbit="Juni 2011";
 tek2.jumlahBuku="400 halaman";
 tek2.tanggalPengadaan="1 Maret 2017";

 tek3.idBuku="303";
 tek3.judulBuku="Arsitektur dan Organisasi Komputer";
 tek3.Penerbit="Erlangga";
 tek3.Pengarang="Akbar";
 tek3.tahunTerbit="Maret 2012";
 tek3.jumlahBuku="307 Halaman";
 tek3.tanggalPengadaan="2 Maret 2017";

 tek4.idBuku="304";
 tek4.judulBuku="Teknologi Masa Depan";
 tek4.Penerbit="Pustaka";
 tek4.Pengarang="Ikhwan \n       Akhwan";
 tek4.tahunTerbit="April 2013";
 tek4.jumlahBuku="200 Halaman";
 tek4.tanggalPengadaan="2 Maret 2017";

 tek5.idBuku="305";
 tek5.judulBuku="Design Web";
 tek5.Penerbit="Gramedia";
 tek5.Pengarang="Syafii";
 tek5.tahunTerbit="Januari 2012";
 tek5.jumlahBuku="108 Halaman";
 tek5.tanggalPengadaan="2 Maret 2017";

 tek6.idBuku="306";
 tek6.judulBuku="HTML";
 tek6.Penerbit="Pustaka";
 tek6.Pengarang="Imam";
 tek6.tahunTerbit="Mei 2011";
 tek6.jumlahBuku="403Halaman";
 tek6.tanggalPengadaan="2 Maret 2017";

 tek7.idBuku="307";
 tek7.judulBuku="Mahir Microsoft";
 tek7.Penerbit="Gramedia";
 tek7.Pengarang="Fitrah \n       Ilalang";
 tek7.tahunTerbit="september 2014";
 tek7.jumlahBuku="210 Halaman";
 tek7.tanggalPengadaan="3 Maret 2017";

cout<<"\n==========================="<<endl;
cout<<"Kategori Buku Teknologi"<<endl;
cout<<"============================"<<endl;
cout<<"1. ID Buku :"<<tek1.getidBuku()<<endl
    <<"   Judul Buku: "<<tek1.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek1.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek1.getPenerbit()<<endl
    <<"   Pengarang :"<<tek1.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek1.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek1.gettanggalPengadaan()<<endl;
cout<<"2. ID Buku :"<<tek2.getidBuku()<<endl
    <<"   Judul Buku: "<<tek2.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek2.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek2.getPenerbit()<<endl
    <<"   Pengarang :"<<tek2.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek2.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<tek2.gettanggalPengadaan()<<endl;
cout<<"3. ID Buku :"<<tek3.getidBuku()<<endl
    <<"   Judul Buku: "<<tek3.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek3.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek3.getPenerbit()<<endl
    <<"   Pengarang :"<<tek3.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek3.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek3.gettanggalPengadaan()<<endl;
cout<<"4. ID Buku :"<<tek4.getidBuku()<<endl
    <<"   Judul Buku: "<<tek4.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek4.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek4.getPenerbit()<<endl
    <<"   Pengarang :"<<tek4.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek4.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek4.gettanggalPengadaan()<<endl;
cout<<"5. ID Buku :"<<tek5.getidBuku()<<endl
    <<"   Judul Buku: "<<tek5.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek5.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek5.getPenerbit()<<endl
    <<"   Pengarang :"<<tek5.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek5.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek5.gettanggalPengadaan()<<endl;
cout<<"6. ID Buku :"<<tek6.getidBuku()<<endl
    <<"   Judul Buku: "<<tek6.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek6.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek6.getPenerbit()<<endl
    <<"   Pengarang :"<<tek6.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek6.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek6.gettanggalPengadaan()<<endl;
cout<<"7. ID Buku :"<<tek7.getidBuku()<<endl
    <<"   Judul Buku: "<<tek7.getjudulBuku()<<endl
    <<"   Jumlah Halaman :"<<tek7.getjumlahBuku()<<endl
    <<"   Penerbit :"<<tek7.getPenerbit()<<endl
    <<"   Pengarang :"<<tek7.getPengarang()<<endl
    <<"   Tahun Terbit :"<<tek7.gettahunTerbit()<<endl
    <<"   Tanggal Pengadaan :"<<tek7.gettanggalPengadaan()<<endl;
}

void sejarah(){
 //Kategori Sejarah
 perpustakaan sej1;
 perpustakaan sej2;
 perpustakaan sej3;
 perpustakaan sej4;
 perpustakaan sej5;
 perpustakaan sej6;
 perpustakaan sej7;

 //pengisian kategori sejarah
 sej1.idBuku="401";
 sej1.judulBuku="Sejarah Indonesia Sebelum dan Pasca Kemerdekaan";
 sej1.Penerbit="ElexMedia";
 sej1.Pengarang="Hermanto Susilo";
 sej1.tahunTerbit="Oktober 2016";
 sej1.jumlahBuku="20 buku, 483 Halaman";
 sej1.tanggalPengadaan="24 februari 2017";

 sej2.idBuku="402";
 sej2.judulBuku="Perang Dunia dan Ancaman Perang Lagi";
 sej2.Penerbit="Gajayana";
 sej2.Pengarang="Otis Pambudi ";
 sej2.tahunTerbit="Oktober 2008";
 sej2.jumlahBuku="12 buku, 104 Halaman";
 sej2.tanggalPengadaan="6 Maret 2017";

 sej3.idBuku="403";
 sej3.judulBuku="Dunia Dalam Sejarah";
 sej3.Penerbit="Penerbit Sakura";
 sej3.Pengarang="J. Watterson \n       W. Chapman";
 sej3.tahunTerbit="Februari 2015";
 sej3.jumlahBuku="5 buku, 871 Halaman";
 sej3.tanggalPengadaan="10 Maret 2017";

 sej4.idBuku="404";
 sej4.judulBuku="Sejarah Searah";
 sej4.Penerbit="Mendut";
 sej4.Pengarang="Pandji Hutabarat";
 sej4.tahunTerbit="Mei 2003";
 sej4.jumlahBuku="10 Buku, 219 Halaman";
 sej4.tanggalPengadaan="24 februari 2017";

 sej5.idBuku="405";
 sej5.judulBuku="Sejarah Islam Nusantara";
 sej5.Penerbit="Penerbit Mahsyur";
 sej5.Pengarang="Ahmad Zubaidi";
 sej5.tahunTerbit="Desember 2014";
 sej5.jumlahBuku="15 buku, 288 Halaman";
 sej5.tanggalPengadaan="7 Maret 2017";

 sej6.idBuku="406";
 sej6.judulBuku="Mengapa Kita Berpaham Pancasila?";
 sej6.Penerbit="Watuharhari";
 sej6.Pengarang="Tuti";
 sej6.tahunTerbit="Agustus 2005";
 sej6.jumlahBuku="25 buku, 104 Halaman";
 sej6.tanggalPengadaan="10 Maret 2017";

 sej7.idBuku="407";
 sej7.judulBuku="Perspektif Sejarah Dunia Di Mata Indonesia";
 sej7.Penerbit="Air Mancur";
 sej7.Pengarang="Jajang \n       Kartonom";
 sej7.tahunTerbit="November 2012";
 sej7.jumlahBuku="8 buku, 323 Halaman";
 sej7.tanggalPengadaan="15 Maret 2017";

 cout<<"\n==========================="<<endl;
 cout<<"Kategori Buku Sejarah"<<endl;
 cout<<"============================"<<endl;
 cout<<"1. ID Buku :"<<sej1.getidBuku()<<endl
     <<"   Judul Buku: "<<sej1.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej1.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej1.getPenerbit()<<endl
     <<"   Pengarang :"<<sej1.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej1.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej1.gettanggalPengadaan()<<endl;
 cout<<"2. ID Buku :"<<sej2.getidBuku()<<endl
     <<"   Judul Buku: "<<sej2.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej2.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej2.getPenerbit()<<endl
     <<"   Pengarang :"<<sej2.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej2.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej2.gettanggalPengadaan()<<endl;
 cout<<"3. ID Buku :"<<sej3.getidBuku()<<endl
     <<"   Judul Buku: "<<sej3.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej3.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej3.getPenerbit()<<endl
     <<"   Pengarang :"<<sej3.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej3.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej3.gettanggalPengadaan()<<endl;
 cout<<"4. ID Buku :"<<sej4.getidBuku()<<endl
     <<"   Judul Buku: "<<sej4.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej4.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej4.getPenerbit()<<endl
     <<"   Pengarang :"<<sej4.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej4.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej4.gettanggalPengadaan()<<endl;
 cout<<"5. ID Buku :"<<sej5.getidBuku()<<endl
     <<"   Judul Buku: "<<sej5.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej5.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej5.getPenerbit()<<endl
     <<"   Pengarang :"<<sej5.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej5.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej5.gettanggalPengadaan()<<endl;
 cout<<"6. ID Buku :"<<sej6.getidBuku()<<endl
     <<"   Judul Buku: "<<sej6.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej6.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej6.getPenerbit()<<endl
     <<"   Pengarang :"<<sej6.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej6.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej6.gettanggalPengadaan()<<endl;
 cout<<"7. ID Buku :"<<sej7.getidBuku()<<endl
     <<"   Judul Buku: "<<sej7.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<sej7.getjumlahBuku()<<endl
     <<"   Penerbit :"<<sej7.getPenerbit()<<endl
     <<"   Pengarang :"<<sej7.getPengarang()<<endl
     <<"   Tahun Terbit :"<<sej7.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<sej7.gettanggalPengadaan()<<endl;
}

void politik(){
 //Kategori politik
 perpustakaan pol1;
 perpustakaan pol2;
 perpustakaan pol3;
 perpustakaan pol4;
 perpustakaan pol5;
 perpustakaan pol6;

 //pengisian kategori politik
 pol1.idBuku="501";
 pol1.judulBuku="Pengantar Ilmu Politik";
 pol1.Penerbit="Dhiwantara";
 pol1.Pengarang="F.Isjwara";
 pol1.tahunTerbit="1964";
 pol1.jumlahBuku="199 Halaman";
 pol1.tanggalPengadaan="21 Maret 2017";

 pol2.idBuku="502";
 pol2.judulBuku="Perkembangan Ilmu Politik di Indonesia";
 pol2.Penerbit="Ghalia Indonesia";
 pol2.Pengarang="Miriam Budiardjo \n Maswadi Rauf";
 pol2.tahunTerbit="1983";
 pol2.jumlahBuku="112 Halaman";
 pol2.tanggalPengadaan="21 Maret 2017";

 pol3.idBuku="503";
 pol3.judulBuku="Dasar-Dasar Ilmu Politik";
 pol3.Penerbit="Dian Rakjat";
 pol3.Pengarang="Miriam Budiardjo";
 pol3.tahunTerbit="2003";
 pol3.jumlahBuku="215 Halaman";
 pol3.tanggalPengadaan="25 Maret 2017";

 pol4.idBuku="504";
 pol4.judulBuku="Etika Politik: Prinsip-prinsip Moral Dasar kenegaraan Modern";
 pol4.Penerbit="Ilmu Politik di Indonesia";
 pol4.Pengarang="Franz magnis-Suseno";
 pol4.tahunTerbit="1988";
 pol4.jumlahBuku="405 Halaman";
 pol4.tanggalPengadaan="3 April 2017";

 pol5.idBuku="505";
 pol5.judulBuku="Islam dan Pembangunan Politik di Indonesia";
 pol5.Penerbit="Haji Masagung";
 pol5.Pengarang="Alamsyah Ratu Perwira Negara";
 pol5.tahunTerbit="1988";
 pol5.jumlahBuku="329 Halaman";
 pol5.tanggalPengadaan="11 Maret 2017";

 pol6.idBuku="506";
 pol6.judulBuku="Golput: Aneka Pandangan Fenomena Politik";
 pol6.Penerbit="Pustaka Sinar harapan";
 pol6.Pengarang="Arbi sanit";
 pol6.tahunTerbit="1992";
 pol6.jumlahBuku="347 Halaman";
 pol6.tanggalPengadaan="12 April 2017";

 cout<<"\n==========================="<<endl;
 cout<<"Kategori Buku Politik"<<endl;
 cout<<"============================"<<endl;
 cout<<"1. ID Buku :"<<pol1.getidBuku()<<endl
 <<"   Judul Buku: "<<pol1.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol1.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol1.getPenerbit()<<endl
 <<"   Pengarang :"<<pol1.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol1.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol1.gettanggalPengadaan()<<endl;
 cout<<"2. ID Buku :"<<pol2.getidBuku()<<endl
 <<"   Judul Buku: "<<pol2.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol2.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol2.getPenerbit()<<endl
 <<"   Pengarang :"<<pol2.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol2.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol2.gettanggalPengadaan()<<endl;
 cout<<"3. ID Buku :"<<pol3.getidBuku()<<endl
 <<"   Judul Buku: "<<pol3.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol3.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol3.getPenerbit()<<endl
 <<"   Pengarang :"<<pol3.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol3.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol3.gettanggalPengadaan()<<endl;
 cout<<"4. ID Buku :"<<pol4.getidBuku()<<endl
 <<"   Judul Buku: "<<pol4.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol4.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol4.getPenerbit()<<endl
 <<"   Pengarang :"<<pol4.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol4.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol4.gettanggalPengadaan()<<endl;
 cout<<"5. ID Buku :"<<pol5.getidBuku()<<endl
 <<"   Judul Buku: "<<pol5.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol5.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol5.getPenerbit()<<endl
 <<"   Pengarang :"<<pol5.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol5.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol5.gettanggalPengadaan()<<endl;
 cout<<"6. ID Buku :"<<pol6.getidBuku()<<endl
 <<"   Judul Buku: "<<pol6.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<pol6.getjumlahBuku()<<endl
 <<"   Penerbit :"<<pol6.getPenerbit()<<endl
 <<"   Pengarang :"<<pol6.getPengarang()<<endl
 <<"   Tahun Terbit :"<<pol6.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<pol6.gettanggalPengadaan()<<endl;
}

void psikologi(){
 //Kategori Psikologi
 perpustakaan psi1;
 perpustakaan psi2;
 perpustakaan psi3;
 perpustakaan psi4;
 perpustakaan psi5;
 //pengisian kategori psikologi
 psi1.idBuku="601";
 psi1.judulBuku="Ada Apa dengan Tubuhku";
 psi1.Penerbit="Indeks";
 psi1.Pengarang="Lynda Madaras \n              Area Madaras";
 psi1.tahunTerbit="Oktober 2011";
 psi1.jumlahBuku="324 Halaman";
 psi1.tanggalPengadaan="24 februari 2017";

 psi2.idBuku="602";
 psi2.judulBuku="Agenda Psikologi Islami";
 psi2.Penerbit="Pustaka Pelajar";
 psi2.Pengarang="H Fuad Nashori";
 psi2.tahunTerbit="Oktober 2008";
 psi2.jumlahBuku="228 Halaman";
 psi2.tanggalPengadaan="6 Maret 2017";

 psi3.idBuku="603";
 psi3.judulBuku="Analisis Tulisan Tangan";
 psi3.Penerbit="Pustaka Pelajar";
 psi3.Pengarang="Karen K. Amend \n              Mary S. Ruiz";
 psi3.tahunTerbit="Februari 2015";
 psi3.jumlahBuku="251 Halaman";
 psi3.tanggalPengadaan="10 Maret 2017";

 psi4.idBuku="604";
 psi4.judulBuku="Ananda Berkebutuhan Khusus; Penanganan Perilaku Sepanjang Rentang Perkembangan";
 psi4.Penerbit="Graha Ilmu";
 psi4.Pengarang="Mahdalela, S.Psi, Psikolog";
 psi4.tahunTerbit="Mei 2003";
 psi4.jumlahBuku="106 Halaman";
 psi4.tanggalPengadaan="12 januari 2017";

 psi5.idBuku="605";
 psi5.judulBuku="Arsitektur, Lingkungan dan Perilaku : Pengantar ke Teori, Metodologi dan Aplikasi";
 psi5.Penerbit="Gadjah Mada University Press";
 psi5.Pengarang="Haryadi \n              B. Setiawan";
 psi5.tahunTerbit="Desember 2010";
 psi5.jumlahBuku="157 Halaman";
 psi5.tanggalPengadaan="7 Maret 2017";

 cout<<"\n============================"<<endl;
 cout<<"Kategori Buku Sejarah"<<endl;
 cout<<"============================"<<endl;
 cout<<"1. ID Buku :"<<psi1.getidBuku()<<endl
     <<"   Judul Buku: "<<psi1.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<psi1.getjumlahBuku()<<endl
     <<"   Penerbit :"<<psi1.getPenerbit()<<endl
     <<"   Pengarang :"<<psi1.getPengarang()<<endl
     <<"   Tahun Terbit :"<<psi1.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<psi1.gettanggalPengadaan()<<endl;
 cout<<"2. ID Buku :"<<psi2.getidBuku()<<endl
     <<"   Judul Buku: "<<psi2.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<psi2.getjumlahBuku()<<endl
     <<"   Penerbit :"<<psi2.getPenerbit()<<endl
     <<"   Pengarang :"<<psi2.getPengarang()<<endl
     <<"   Tahun Terbit :"<<psi2.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<psi2.gettanggalPengadaan()<<endl;
 cout<<"3. ID Buku :"<<psi3.getidBuku()<<endl
     <<"   Judul Buku: "<<psi3.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<psi3.getjumlahBuku()<<endl
     <<"   Penerbit :"<<psi3.getPenerbit()<<endl
     <<"   Pengarang :"<<psi3.getPengarang()<<endl
     <<"   Tahun Terbit :"<<psi3.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<psi3.gettanggalPengadaan()<<endl;
 cout<<"4. ID Buku :"<<psi4.getidBuku()<<endl
     <<"   Judul Buku: "<<psi4.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<psi4.getjumlahBuku()<<endl
     <<"   Penerbit :"<<psi4.getPenerbit()<<endl
     <<"   Pengarang :"<<psi4.getPengarang()<<endl
     <<"   Tahun Terbit :"<<psi4.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<psi4.gettanggalPengadaan()<<endl;
 cout<<"5. ID Buku :"<<psi5.getidBuku()<<endl
     <<"   Judul Buku: "<<psi5.getjudulBuku()<<endl
     <<"   Jumlah Halaman :"<<psi5.getjumlahBuku()<<endl
     <<"   Penerbit :"<<psi5.getPenerbit()<<endl
     <<"   Pengarang :"<<psi5.getPengarang()<<endl
     <<"   Tahun Terbit :"<<psi5.gettahunTerbit()<<endl
     <<"   Tanggal Pengadaan :"<<psi5.gettanggalPengadaan()<<endl;
}

void fiksi(){
 //Kategori politik
 perpustakaan fik1;
 perpustakaan fik2;
 perpustakaan fik3;
 perpustakaan fik4;
 perpustakaan fik5;
 perpustakaan fik6;

 //pengisian kategori politik
 fik1.idBuku="701";
 fik1.judulBuku="Supernatural Season 1 Jilid 1";
 fik1.Penerbit="Elex Media Computindo";
 fik1.Pengarang="Keith R.A. DeCandido";
 fik1.tahunTerbit="2011";
 fik1.jumlahBuku="499 Halaman";
 fik1.tanggalPengadaan="21 Maret 2017";

 fik2.idBuku="702";
 fik2.judulBuku="Supernatural Season 1 Jilid 2";
 fik2.Penerbit="Elex Media Computindo";
 fik2.Pengarang="Keith R.A. DeCandido";
 fik2.tahunTerbit="2011";
 fik2.jumlahBuku="599 Halaman";
 fik2.tanggalPengadaan="21 Juni 2017";

 fik3.idBuku="703";
 fik3.judulBuku="Supernatural Season 1 Jilid 3";
 fik3.Penerbit="Elex Media Computindo";
 fik3.Pengarang="Keith R.A. DeCandido";
 fik3.tahunTerbit="2011";
 fik3.jumlahBuku="699 Halaman";
 fik3.tanggalPengadaan="21 September 2017";

 fik4.idBuku="704";
 fik4.judulBuku="Supernatural Season 2 Jilid 1";
 fik4.Penerbit="Elex Media Computindo";
 fik4.Pengarang="Keith R.A. DeCandido";
 fik4.tahunTerbit="2012";
 fik4.jumlahBuku="349 Halaman";
 fik4.tanggalPengadaan="21 Maret 2018";

 fik5.idBuku="705";
 fik5.judulBuku="Supernatural Season 2 Jilid 2";
 fik5.Penerbit="Elex Media Computindo";
 fik5.Pengarang="Keith R.A. DeCandido";
 fik5.tahunTerbit="2012";
 fik5.jumlahBuku="329 Halaman";
 fik5.tanggalPengadaan="11 Agustus 2018";

 fik6.idBuku="706";
 fik6.judulBuku="Supernatural Season 2 Jilid 3";
 fik6.Penerbit="Elex Media Computindo";
 fik6.Pengarang="Keith R.A. DeCandido";
 fik6.tahunTerbit="2012";
 fik6.jumlahBuku="347 Halaman";
 fik6.tanggalPengadaan="21 Desember 2018";

 cout<<"\n============================"<<endl;
 cout<<"Kategori Buku fikitik"<<endl;
 cout<<"============================"<<endl;
 cout<<"1. ID Buku :"<<fik1.getidBuku()<<endl
 <<"   Judul Buku: "<<fik1.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik1.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik1.getPenerbit()<<endl
 <<"   Pengarang :"<<fik1.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik1.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik1.gettanggalPengadaan()<<endl;
 cout<<"2. ID Buku :"<<fik2.getidBuku()<<endl
 <<"   Judul Buku: "<<fik2.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik2.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik2.getPenerbit()<<endl
 <<"   Pengarang :"<<fik2.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik2.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik2.gettanggalPengadaan()<<endl;
 cout<<"3. ID Buku :"<<fik3.getidBuku()<<endl
 <<"   Judul Buku: "<<fik3.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik3.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik3.getPenerbit()<<endl
 <<"   Pengarang :"<<fik3.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik3.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik3.gettanggalPengadaan()<<endl;
 cout<<"4. ID Buku :"<<fik4.getidBuku()<<endl
 <<"   Judul Buku: "<<fik4.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik4.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik4.getPenerbit()<<endl
 <<"   Pengarang :"<<fik4.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik4.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik4.gettanggalPengadaan()<<endl;
 cout<<"5. ID Buku :"<<fik5.getidBuku()<<endl
 <<"   Judul Buku: "<<fik5.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik5.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik5.getPenerbit()<<endl
 <<"   Pengarang :"<<fik5.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik5.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik5.gettanggalPengadaan()<<endl;
 cout<<"6. ID Buku :"<<fik6.getidBuku()<<endl
 <<"   Judul Buku: "<<fik6.getjudulBuku()<<endl
 <<"   Jumlah Halaman :"<<fik6.getjumlahBuku()<<endl
 <<"   Penerbit :"<<fik6.getPenerbit()<<endl
 <<"   Pengarang :"<<fik6.getPengarang()<<endl
 <<"   Tahun Terbit :"<<fik6.gettahunTerbit()<<endl
 <<"   Tanggal Pengadaan :"<<fik6.gettanggalPengadaan()<<endl;
}

int main(){
int pilihan;
do{
     cout<<"----------------------------------"<<endl
         <<"DAFTAR BUKU PERPUSTAKAAN MOJOPAHIT"<<endl
         <<"----------------------------------"<<endl;
     cout<<"1. tekno\n2. sejarah\n3. politik\n4. agama\n5. filsafat\n6. psikologi\n7. fiksi\n0. exit";
     cout<<"\nmasukkan pilihan anda: ";
     cin>>pilihan;

     switch(pilihan){
         case 1:
            teknologi(); break;
         case 2:
            sejarah(); break;
         case 3:
            politik(); break;
         case 4:
            agama(); break;
         case 5:
            filsafat(); break;
         case 6:
            psikologi(); break;
         case 7:
            fiksi(); break;
         default:
            cout<<"DASAR NGAWUR!";
     }
     cout<<endl<<endl;
} while(pilihan!=0);


 return 0;
}
