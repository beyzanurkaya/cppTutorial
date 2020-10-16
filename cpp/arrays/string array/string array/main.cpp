#include <iostream>
using namespace std;

//KARAKTER DİZİSİ
void Letter(){
    
    char letter[5]={'B','E','Y','Z','A'};
    for (int i=0; i<5; i++){
        cout << letter[i];
    }cout << endl;
    char name[6]={'S','E','V','V','A','L'};
    char name2[3]={'E','C','E'};
    for (int j=0; j<3; j++) {
        name[j]=name2[j]; //name dizisine name2 dizisi atanıyor.
    }for (int j=0; j<6; j++) {
        cout << name[j];
    }cout << endl;
}

void CharacterArray(){
    char name[50];
    cout << "Enter your name: ";
    gets(name);
    cout << "Your name is " << name << endl;
}

void Strcpy(){
    char str1[]="Simple string";
    char str2[40];
    char str3[40];
    strcpy (str2,str1); //strcpy kopyalama komutudur. strcpy(üzerine yazılan, kopyalanmak ,istenen);
    strcpy(str3, "Copy succesful");
    cout << "str1: " << str1 << endl << "str2: " << str2 << endl << "str3: " << str3 << endl;
}

void Strlen(){
    char str1[100];
    char str2[100];
    
    cout << "Enter a string: ";
    gets (str1);
    cout << "Enter a another string: ";
    gets (str2);
    int len1 = strlen(str1); //strlen karakter dizisinin uzunluk komutudur. strlen(değieken);
    int len2 = strlen(str2); //strlen char için kullanılır string için değil.
    
    cout << "Length of str1: " << len1 << endl;
    cout << "Lenght of str2: " << len2 << endl;
    if (len1 > len2)
        cout << "str1 is longer than str2" << endl;
    else if (len1 < len2)
        cout << "str2 is longer than str1" <<endl;
    else
        cout << "str1 and str1 are of equal length" << endl;
}

void Strcat(){
    char name[50];
    char surname[100];
    cout << "Name: ";
    cin >> name;
    cout << "Surname: ";
    cin >> surname;
    
    strcat(name, surname); //strcat karakter dizilerini birbirine ekler.
    cout << "Your full name is " << name << endl;
}

void Strcmp(){
    
    char username[50],password[50];
    char ID[]="Beyza Nur Kaya";
    char pass[]="Enter";
    cout << "Enter your username: " << endl;
    gets(username);
    if (strcmp(username, ID)==0) { //strcmp 2 karakter dizisinin karşılaştırmasını yapan komuttur.
        cout << "Enter your password: ";
        gets(password);
        if (strcmp(password, pass)==0) {
            cout << "Welcome.\n";
        }else
            cout << "Wrong password. Siktir git." << endl;
    }else
        cout << "This user doesn't exist.\n";
    
}

int main() {
    
    Letter();
    //CharacterArray();
    //Strcpy();
    //Strlen();
    //Strcat();
    //Strcmp();
    
    return 0;
}
