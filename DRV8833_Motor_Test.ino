
#define BIN_1             3
#define BIN_2             4
#define AIN_1             9
#define AIN_2             8
#define LED_PIN           13
#define MAX_PWM_VOLTAGE   255/2

void setup() {
    pinMode(BIN_1, OUTPUT);
    pinMode(BIN_2, OUTPUT);
    pinMode(AIN_1, OUTPUT);
    pinMode(AIN_2, OUTPUT);
    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, LOW);    
    //Serial1.begin(9600);
}

void loop() {
    //digitalWrite(BIN_2, LOW);
    //digitalWrite(AIN_2, LOW);
    analogWrite(BIN_2, 0);
    analogWrite(AIN_2, 0);
    analogWrite(BIN_1, MAX_PWM_VOLTAGE);
    analogWrite(AIN_1, MAX_PWM_VOLTAGE);
    delay(2000);
    
    //digitalWrite(BIN_1, LOW);
    //digitalWrite(AIN_2, LOW);
    analogWrite(BIN_1, 0);
    analogWrite(AIN_2, 0);
    analogWrite(BIN_2, MAX_PWM_VOLTAGE);
    analogWrite(AIN_1, MAX_PWM_VOLTAGE);
    delay(2000);
    
    digitalWrite(LED_PIN, HIGH);
    
    //digitalWrite(BIN_2, LOW);
    //digitalWrite(AIN_1, LOW);
    analogWrite(BIN_2, 0);
    analogWrite(AIN_1, 0);
    analogWrite(BIN_1, MAX_PWM_VOLTAGE);
    analogWrite(AIN_2, MAX_PWM_VOLTAGE);
    delay(2000);
    
    //digitalWrite(BIN_1, LOW);
    //digitalWrite(AIN_1, LOW);
    analogWrite(BIN_1, 0);
    analogWrite(AIN_1, 0);
    analogWrite(BIN_2, MAX_PWM_VOLTAGE);
    analogWrite(AIN_2, MAX_PWM_VOLTAGE);

    digitalWrite(LED_PIN, LOW);
    
    delay(2000);
    //Serial1.println("Heart beat.");    
}
