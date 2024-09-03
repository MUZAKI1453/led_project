// Definisi pin untuk lampu lalu lintas pertama
int redLed1    = 7;
int yellowLed1 = 6;
int greenLed1  = 5;

// Definisi pin untuk lampu lalu lintas kedua
int redLed2    = 3;
int yellowLed2 = 2;
int greenLed2  = 1;

void setup() {
  // Atur mode pin sebagai output
  pinMode(redLed1,    OUTPUT);
  pinMode(yellowLed1, OUTPUT);
  pinMode(greenLed1,  OUTPUT);

  pinMode(redLed2,    OUTPUT);
  pinMode(yellowLed2, OUTPUT);
  pinMode(greenLed2,  OUTPUT);
}

void loop() {
  // Lampu merah menyala, lampu lainnya mati
  setTrafficLights(redLed1, yellowLed1, greenLed1, HIGH, LOW, LOW);
  setTrafficLights(redLed2, yellowLed2, greenLed2, LOW, LOW, HIGH);
  delay(3000); // Tunggu 3 detik

  // Lampu kuning menyala, lampu lainnya mati
  setTrafficLights(redLed1, yellowLed1, greenLed1, LOW, HIGH, LOW);
  setTrafficLights(redLed2, yellowLed2, greenLed2, LOW, HIGH, LOW);
  delay(1000); // Tunggu 1 detik (biasanya lampu kuning lebih singkat)

  // Lampu hijau menyala, lampu lainnya mati
  setTrafficLights(redLed1, yellowLed1, greenLed1, LOW, LOW, HIGH);
  setTrafficLights(redLed2, yellowLed2, greenLed2, HIGH, LOW, LOW);
  delay(3000); // Tunggu 3 detik

  // Lampu kuning menyala, lampu lainnya mati
  setTrafficLights(redLed1, yellowLed1, greenLed1, LOW, HIGH, LOW);
  setTrafficLights(redLed2, yellowLed2, greenLed2, LOW, HIGH, LOW);
  delay(1000); // Tunggu 1 detik (biasanya lampu kuning lebih singkat)
}

// Fungsi untuk mengatur lampu lalu lintas
void setTrafficLights(int redPin, int yellowPin, int greenPin, int redState, int yellowState, int greenState) {
  digitalWrite(redPin, redState);
  digitalWrite(yellowPin, yellowState);
  digitalWrite(greenPin, greenState);
}
