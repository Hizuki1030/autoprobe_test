// 20kHz PWM signal on PIN1 (GPIO4) for Raspberry Pi Pico
// PIN1 = GPIO4 according to pin mapping

void setup() {
  Serial.begin(115200);
  
  // GPIO4 (PIN1) をPWM出力に設定
  pinMode(4, OUTPUT);
  
  // 20kHz PWM設定
  // Raspberry Pi PicoのPWMは133MHzのシステムクロックを使用
  // 20kHz = 50μs周期
  // PWM周波数設定: analogWriteFreq(frequency)
  analogWriteFreq(20000); // 20kHz
  
  // デューティサイクル50%で開始
  analogWrite(4, 127); // 0-255の範囲で127は約50%
  
  Serial.println("20kHz PWM signal started on PIN1 (GPIO4)");
  Serial.println("Frequency: 20kHz");
  Serial.println("Duty Cycle: 50%");
}

void loop() {
  // PWM信号は継続的に出力される
  delay(1000);
  Serial.println("PWM running...");
}