/*
 * Du an: Doc nhiet do LM35 va gui qua Serial
 * Mo rong: Ho tro 3 kenh A0, A1, A2
 */

int adcValues[3];
float nhietDo[3];
char chuoi[40];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Kenh A0
  adcValues[0] = analogRead(A0);
  nhietDo[0] = (adcValues[0] * 500.0) / 1023.0;

  // Kenh A1
  adcValues[1] = analogRead(A1);
  nhietDo[1] = (adcValues[1] * 500.0) / 1023.0;

  // Kenh A2
  adcValues[2] = analogRead(A2);
  nhietDo[2] = (adcValues[2] * 500.0) / 1023.0;

  // Gui du lieu dang CSV
  sprintf(chuoi, "%d,%d,%d\n",
          (int)nhietDo[0],
          (int)nhietDo[1],
          (int)nhietDo[2]);

  Serial.print(chuoi);

  delay(100);
}