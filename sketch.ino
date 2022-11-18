  const int greenLEDPin = 9;
  const int redLEDPin = 11;
  const int blueLEDPin = 10;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(greenLEDPin, OUTPUT);
  pinMode(redLEDPin, OUTPUT);
  pinMode(blueLEDPin, OUTPUT);

}

void loop() {


  if (Serial.available()>0){
    String msg = Serial.readString();

    if(msg == "pink"){
       RGB_color(255, 255, 125); // Rasp 
    } else if (msg == "red"){
      RGB_color(255, 0, 0); // Red
    } else if (msg == "green"){
      RGB_color(0, 255, 0); //Green 
    } else {
      RGB_color(0, 0, 255);
    }
  }
  // put your main code here, to run repeatedly:
  // RGB_color(255, 0, 0); // Red
  // delay(1000);
  // RGB_color(0, 255, 0); // Green
  // delay(1000);
  // RGB_color(0, 0, 255); // Blue
  // delay(1000);
  // RGB_color(255, 255, 125); // Raspberry
  // delay(1000);
  // RGB_color(0, 255, 255); // Cyan
  // delay(1000);
  //RGB_color(255, 0, 255); // Magenta
  // delay(1000);
  // RGB_color(255, 255, 0); // Yellow
  // delay(1000);
  //RGB_color(255, 255, 255); // White
  // delay(1000);
}

void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(redLEDPin, red_light_value);
  analogWrite(greenLEDPin, green_light_value);
  analogWrite(blueLEDPin, blue_light_value);
}
 
