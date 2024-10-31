//Praktikum 2
//Percobaan 2

unsigned int inputPin[] = {2,3,4,5};//variable array

//menamai pin dengan cara variabel array
unsigned int ledPin[] = {10,11,12,9};

void setup()
{
  //set pin sebagai input dengan menggunakan for dan array 
  for (int indeks = 0; indeks < 4; indeks++)
  {
    pinMode(ledPin[indeks], OUTPUT);
    pinMode(inputPin[indeks], INPUT);
  }
}

void loop()
{
  for (int indeks = 0; indeks < 4; indeks++)
  {
    int val = digitalRead(inputPin[indeks]);//baca nilai input
    if (val == HIGH)//cek push button ditekan
    {
      //push button ditekan led on
      digitalWrite(ledPin[indeks], HIGH);
    }
    else
    {
     //led off
     digitalWrite(ledPin[indeks], LOW);
    }
  }
}
