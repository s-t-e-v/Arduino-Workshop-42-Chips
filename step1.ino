#define TIME_UNIT 250 // ms
#define DOT TIME_UNIT
#define DASH 3 * TIME_UNIT
#define SPACE_BETWEEN_SYMBOLS TIME_UNIT
#define SPACE_BETWEEN_LETTERS 3 * TIME_UNIT
#define SPACE_BETWEEN_WORDS 7 * TIME_UNIT


void setup() {
  // put your setup code here, to run once:
  pinMode(PD7, OUTPUT);
}

void dot() {
    digitalWrite(PD7, HIGH);
    delay(DOT);
}

void dash() {
  digitalWrite(PD7, HIGH);
  delay(DASH);
}

void space_between_letters() {
  digitalWrite(PD7, LOW);
  delay(SPACE_BETWEEN_LETTERS);
}

void space_between_symbols() {
  digitalWrite(PD7, LOW);
  delay(SPACE_BETWEEN_SYMBOLS);
}

void space_between_words() {
  digitalWrite(PD7, LOW);
  delay(SPACE_BETWEEN_WORDS);
}

void morse_4() {
  // 4 ....-
  dot();
  space_between_symbols();
  dot();
  space_between_symbols();
  dot();
  space_between_symbols();
  dot();
  space_between_symbols();
  dash();
}

void morse_2() {
  // 2 ..---
  dot();
  space_between_symbols();
  dot();
  space_between_symbols();
  dash();
  space_between_symbols();
  dash();
  space_between_symbols();
  dash();
}

void loop() {
  // put your main code here, to run repeatedly:
  morse_4();
  space_between_letters();
  morse_2();
  space_between_words();
}
