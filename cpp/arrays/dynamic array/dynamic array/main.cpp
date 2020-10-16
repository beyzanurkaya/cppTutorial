#include <iostream>
using namespace std;

int main() {

//DINAMIK BELLEK KULLANIMI (new-delete operator)
    
    //Bazen bir veri icin ne kadar yerin ayrilmasi gerektigini bilemeyiz. Ornegin kullanicidan ismini istedigimiz zaman girilecek ismin kac karakterli oldugunu bilemeyiz. Bunun icin bir ust sinir vermemiz gerekir. Peki ya kullanici daha fazlasini girerse? Ya da bir dosyadan veri okurken dosyanin boyutunu bilemeyiz. Normalde kullandigimiz tum değiskenlerin boyutlari derleme sirasinda bilinir ve program buna gore yazilir. Boyutunu bilmedigimiz veriler icin program calisirken yer ayirmak zorundayiz. Bunu da new deyimi ile yapiyoruz.
    
    //Dizi veri tipli bir degiskenin kullanilmasi sirasinda 3 onemli sinirlama ile karsilasilir. Bu sinirlamalar; Dizinin boyutu sabittir, derleme asamasinda dizinin boyutu belirtilmis olmalidir, dizinin omru sadece tanimlandigi blok sona erene kadardir.
    
    //Bu sinirlandirmalardan kurtulabilmek icin dizinin bellege program calisirken(run time) dinamik olarak yerlestirilmesine ihtiyac vardir. Herhangi bir dizinin aksine bellege dinamik olarak yerlestirilen dizi, bellekten acıkca silinine kadar orada kalir. Niceliklerin bellege dinamik olarak yerlestirildikleri yere heap denir.
    
    //Bir dizi degiskeni tanimlanirken onun tipi, adi ve boyutu belirlenir. Bir dizi bellege dinamik olarak yerlestirilecegi zaman dizinin tipi ve boyutu belirlenir fakat adi belirtilmez.
    
    int*array= new int[10]{1,2,3,4,5,6,7,8,9,10}; //Burada new deyimi; int veri tipli 10 elemana sahip bir diziyi bellege yerlestirilir ve dizinin ilk elemanin adresini array isimli bir pointera atar. Boylece array dizisi icin bellekte yer ayrilmis olur.
    
    
    int* in= new int[10](); //İci bos parantezlerle tum elemanlara 0 atanmis olur.
    
    in[0] = 12;
    
    for (int i=0; i<10; i++) {
        cout << array[i] << "  ";
    }cout << endl;
    
    delete [] array;
    
    return 0;
}
