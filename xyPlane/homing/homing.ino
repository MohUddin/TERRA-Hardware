//Homing the XY-plane

#define pinEnable   13 // Enable
#define pinStep      9 // Step
#define pinDir       8 // Direction
#define pinEnable_2  4 // Enable
#define pinStep_2    3 // Step
#define pinDir_2     2 // Direction

void setup () {
  Serial.begin(9600);
  Serial.println("Test DRV8825");


  pinMode( pinEnable,   OUTPUT );
  pinMode( pinDir   ,   OUTPUT );
  pinMode( pinStep  ,   OUTPUT );
  pinMode( pinEnable_2, OUTPUT );
  pinMode( pinDir_2   , OUTPUT );
  pinMode( pinStep_2  , OUTPUT );
}

void loop(){
int ivy = 0;


  digitalWrite( pinDir   , HIGH); // Direction control
  digitalWrite( pinStep  , LOW);  // initialize it to be not moving
  digitalWrite( pinDir_2   , LOW); // Direction control of motor 2
  digitalWrite( pinStep  , LOW);  // initialize motor 2 to be not moving

  //Start homing

  for (ivy=0; ivy<800; ivy++){
  Serial.println(ivy);
  digitalWrite( pinStep, HIGH);
  digitalWrite( pinStep_2, HIGH);
  delay(15);
  digitalWrite(pinStep, LOW);
  digitalWrite(pinStep_2, LOW);
  delay(15);
  }

// Stop Motion

while (1) ;

}
