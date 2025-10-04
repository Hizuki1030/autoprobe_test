// PIN1（GPIO4）で20kHzのPWM信号を出力するプログラム
// Raspberry Pi Pico用

#include <Arduino.h>

#define PWM_PIN D9  // PIN1はD9
#define PWM_FREQ 20000  // 20kHz

void setup() {
  Serial.begin(115200);
  
  // PWMピンを設定
  pinMode(PWM_PIN, OUTPUT);
  
  // PWM周波数を20kHzに設定（より低い値で調整）
  analogWriteFreq(8000);  // 実際の出力が約20kHzになるよう調整
  
  Serial.println("20kHz PWM signal starting on PIN1 (D9)");
  Serial.print("PWM Frequency: ");
  Serial.print(PWM_FREQ);
  Serial.println(" Hz");
}

void loop() {
  // デューティサイクル50%でPWM出力
  analogWrite(PWM_PIN, 128); // 0-255の範囲で50%は128
  
  // シリアルモニタに状態を表示（1秒ごと）
  Serial.println("PWM output: 50% duty cycle at 20kHz on PIN1 (D9)");
  delay(1000);
}
