#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define LED6 7
#define chave0 8
#define chave1 12
#define chave2 13
#define chave3 11
#define chave4 10
int val1 = 0;

void setup() {
  // Inicializa os parâmetros do Arduíno:
  // Configura os pinos como saída e entrada do Arduíno
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
  pinMode(LED5,OUTPUT);
  pinMode(LED6,OUTPUT);
  pinMode(chave0,INPUT);
  pinMode(chave1,INPUT);
  pinMode(chave2,INPUT);
  pinMode(chave3,INPUT);
  pinMode(chave4,INPUT);
}

void loop() {
  val1 = digitalRead(chave0);
  if (val1 == 1 ){
  digitalWrite(LED1,HIGH);
  digitalWrite(LED2,HIGH);
  digitalWrite(LED3,HIGH);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);
  digitalWrite(LED6,LOW);
  }
  else  {
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  digitalWrite(LED5,HIGH);
  digitalWrite(LED6,HIGH);
  }
}