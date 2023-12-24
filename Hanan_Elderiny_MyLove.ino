char signal;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);   //left motors forward
  pinMode(10, OUTPUT);   //left motors reverse
  pinMode(11, OUTPUT);   //right motors forward
  pinMode(12, OUTPUT);   //right motors reverse

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    signal = Serial.read();
    Serial.println(signal);

    if (signal == 'L') {  //Left
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
    }
    else if (signal == 'R') { //Right
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
    }
    else if (signal == 'F') { //Forward
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
    }
    else if (signal == 'B') { //Back
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
    }
    else if (signal == 'I') { //Forward Right
      digitalWrite(9, LOW);
      digitalWrite(10, HIGH);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
    else if (signal == 'H') { //Forward Left
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
    }
    else if (signal == 'J') { //Back Right
      digitalWrite(9, HIGH);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
    else if (signal == 'G') { //Back Left
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
    }
    else {                   //Stop
      digitalWrite(9, LOW);
      digitalWrite(10, LOW);
      digitalWrite(11, LOW);
      digitalWrite(12, LOW);
    }
  }
}
