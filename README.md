# ArrayExercise__CPP
Bahan Ajar Fundamental Pemrograman C++. Latihan Array - Membuat Program Grafik Nilai.<br><br>
<img src="https://github.com/RizkyKhapidsyah/ArrayExercise__CPP/blob/master/Result/001.PNG"><br>
<img src="https://github.com/RizkyKhapidsyah/ArrayExercise__CPP/blob/master/Result/002.PNG"><br><br>
- Lihat <a href="https://github.com/RizkyKhapidsyah/ArrayExercise__CPP/blob/master/Source.cpp">Source Code</a><br><br>

Array [larik] merupakan hal fundamental yang sering dijumpai dalam banyak kasus di dunia pemrograman. Maka dari itu, sebagai programmer sobat perlu membekali diri dengan pemahaman konsep array dan mampu mengimplementasikannya ke dalam kasus-kasus yang sobat hadapi. Dalam artikel kali ini kita akan membahas pengantar / dasar materi array dalam C++, dimana artikel ini sebagai permulaan dalam mempelajari array sebelum sobat mempelajari artikel mengenai array lainnya yang lebih komplek.

# Apa itu Array?

Array adalah sebuah variabel yang menyimpan sekumpulan data yang mempunyai tipe sama atau Array juga dapat disebut sebagai kumpulan dari nilai-nilai data yang bertipe sama (misal int) dalam urutan tertentu yang memakai sebuah nama yang sama. Setiap data tersebut menempati alamat memori atau lokasi yang berbeda-beda dan selanjutnya disebut dengan elemen array. Elemen array sendiri dapat diakses melalui indeks yang terdapat di dalamnya. Namun, penting sekali untuk di ingat bahwa dalam C++ indeks array selalu dimulai dari 0, buka 1. Berikut ini gambar yang mengilustrasikan sebuah array.
Ilustrasi Array atau Ilustrasi Array Satu Dimensi
Ilustrasi Array atau Ilustrasi Array Satu Dimensi

# Macam-Macam Array

## Array Satu Dimensi

Array satu dimensi merupakan array yang terdiri dari n buah kolom atau Array satu dimensi adalah array yang terdiri dari 1 subskrip array saja, setiap elemen array satu dimensi dapat diakses melalui indeks yang terdapat di dalamnya

Contoh Deklarasi Array Satu Dimensi:

      tipe_data  nama_array  [jumlah_elemen];

   
## Array Dua Dimensi

Array dua dimensi merupakan array yang terdiri dari n buah baris dan m buah kolom, bentuknya dapat sobat bayangkan seperti matriks atau tabel. dimana indeks pertama menunjukan baris dan indeks kedua menunjukan kolom. Array dua dimensi biasa digunakan untuk pendataan nilai, pendataan penjualan dan lain sebagainya.

Contoh Deklarasi Array Dua Dimensi:

      tipe_data  nama_array  [jumlah_elemen_baris] [jumlah_elemen_kolom];

## Array Multidimensi

Array multidimensi merupakan array yang mempunyai ukuran lebih dari dua dimensi. Bentuk deklarasi array multidimensi serupa dengan deklarasi array satu dimensi maupun dua dimensi.

Contoh Deklarasi array Multidimensi:

      tipe_data  nama_array [jumlah_elemen1] [jumlah_elemen2] ... [jumlah_elemenN];

Karena kali ini kita akan membahas konsep dasar array, maka kita akan menggunkan array satu dimensi untuk menjelaskan konsepnya, hal tersebut karena array satu dimensi merupakan bentuk dasar dari array dua dimensi dan array multidimensi.

# Bentuk / Cara Umum Pendeklarasian Array

Untuk mendeklarasikan sebuah array dalam C++, kita harus menggunakan tanda [ ] (bracket). Adapun bentuk umum dari pendeklarasian array adalah sebagai berikut

      tipe_data  nama_array  [jumlah_elemen];

Sebagai contoh misal kita ingin mendeklarasikan sebuah array (misalnya dengan nama LARIK) yang memiliki 10 elemen dengan tipe data int, maka bentuk array nya adalah sebagai berikut:

      int LARIK [10];

Seandainya array LARIK akan kita beri nilai saat pendeklarasian (inisialisasi), maka contoh penulisannya adalah sebagai berikut:

      int LARIK [10] = {2, 5, 4, 8, 1, 3, 7, 1, 10, 6};

Dari pendeklarasian sekaligus inisialisasi array LARIK diatas, bentuk array LARIK dapat di ilustrasikan sebagai berikut:

Ilustrasi Array 'LARIK'
Ilustrasi Array 'LARIK'

Perlu sobat ketahui, ruang memori yang dibutuhkan untuk deklarasi array tersebut adalah 40 byte, yang berasal dari 10 x 4 byte (4 merupakan ukuran tipe data int).

# Cara Akses Array

Cara untuk mengakses elemen array adalah dengan menuliskan indeksnya. Contohnya saat kita ingin mengambil nilai yang terdapat pada elemen ke-5 dan menampung nilai tersebut kedalam sebuah variabel yang bertipe int juga (misal int tampung), maka kita perlu menuliskan kode seperti berikut ini:

      tampung = LARIK[4];

Kenapa 4, bukan 5? ingat indeks array selalu dimulai dari 0 sehingga untuk mengakses elemen ke-5, maka indeks yang kita butuhkan adalah 5-1, yaitu 4.

Referensi Artikel: <a href="http://www.materidosen.com">MateriDosen</a><br>
Referensi Source Code: <a href="https://www.youtube.com/user/faqihzamukhlish"> Kelas Terbuka </a> dan <a href="https://github.com/kelasterbuka"> Kelas Terbuka (Repository)</a>. Created by <a href="https://github.com/faqihza">Faqihza Mukhlish.</a> Thanks To: <a href="https://www.youtube.com/channel/UCRGHjysoCemh4y7tCJQs30w/about">Faqihza Mukhlish.</a><br>

-----
All Source Code is Modified.

