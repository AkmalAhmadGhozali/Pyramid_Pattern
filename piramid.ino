int b = 0;
String s = "     ";

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (b < 5){
    b = b + 1;
    Serial.print(s.substring(0, s.length() - b));
    cetakbintang(b);
    Serial.println();  
  }
}

void cetakbintang(int i) {
  if (i > 1) {
    cetakbintang(i-1);
    Serial.print("*");
  }
  Serial.print("*");
}
