/*
  이것은 주석
*/

// 이것은 한줄 주석

int led = 13;//C언어 문법과 같음.

void setup() {//아두이노가 켜질때 딱 한번 실행
  pinMode(led, OUTPUT);//특정 핀을 출력 또는 입력 모드로 설정하는 명령어. 지금은 13번 핀.
  //아두이노의 핀 부분을 담당하는 함수.
}

void loop() {//setup이 실행된 다음 계속해서 반복되는 함수
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
