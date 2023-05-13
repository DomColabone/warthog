//PROJETO CIENCIAS DA COMPUTAÇÃO 1 SEMESTRE
class DCMotor{int spd = 255, pin1, pin2;  
  public:  
    void Pinout(int in1, int in2){ 
      pin1 = in1;
      pin2 = in2;
      pinMode(pin1, OUTPUT);
      pinMode(pin2, OUTPUT);
      }   
    void Speed(int in1){ 
      spd = in1;
      }     
    void Forward(){ 
      analogWrite(pin1, spd);
      digitalWrite(pin2, LOW);
      }   
    void Backward(){ 
      digitalWrite(pin1, LOW);
      analogWrite(pin2, spd);
      }
    void Stop(){ 
      digitalWrite(pin1, LOW);
      digitalWrite(pin2, LOW);
      }
   };DCMotor Motor1, Motor2 , Motor3, Motor4;  
   
void setup() {
  Motor1.Pinout(12,11); 
  Motor2.Pinout(10,9); 
  Motor3.Pinout(8,7); 
  Motor4.Pinout(6,5);
}
void loop() {
  //definir a velocidade dos motores
  Motor1.Speed(200); 
  //definir a direção
  Motor1.Forward(); 
}