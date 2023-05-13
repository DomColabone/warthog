//Projeto Ciencias da computaçao primeiro semestre
class DistanceSensor {  
  int distancia,pin1,pin2; 
  public:  
    
    void Pinout(int echo, int trig){ 
      pin1 = echo;
      pin2 = trig;
      pinMode(pin1, INPUT);
      pinMode(pin2, OUTPUT);
      }  
  void Ultrassonic(){
    digitalWrite(pin2, LOW);
   delay(0005);
   digitalWrite(pin2, HIGH);
   delay(0010);
   digitalWrite(pin2, LOW);  
    distancia = pulseIn(pin1, HIGH);
    distancia = distancia/58;
     Serial.println(distancia);
   }
   };
   DistanceSensor Sensor1, Sensor2,Sensor3; 
void setup() {
  Sensor1.Pinout(6,7); 
  Serial.begin(9600);
}
void loop() {
  Sensor1.Ultrassonic();
}
