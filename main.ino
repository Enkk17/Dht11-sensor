#include <EduIntro.h>
DHT11 dht11(7);
int C;
int H;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  dht11.update();
  C=dht11.readCelsius();
  H=dht11.readHumidity();
  Serial.print(" H: ");
  Serial.print(H);
  Serial.print("\n");
  Serial.print("C: ");
  Serial.print(C);


  delay(1500);
}
