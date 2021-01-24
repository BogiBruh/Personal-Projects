void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

/* 1 - gore_desno, dole_desno
   * 2 - gore, dole, sredina, gore_desno, dole_levo
   * 3 - gore, dole, sredina, gore_levo, gore_desno, dole_levo, dole_desno
   * 4 - sredina, gore_levo, gore_desno, dole_desno
   * 5 - gore, dole, sredina, gore_levo, dole_desno
   * 6 - gore, dole, sredina, gore_levo, dole_levo, dole_desno
   * 7 - gore, gore_desno, dole_desno
   * 8 - gore, dole, sredina, gore_levo, gore_desno, dole_levo, dole_desno
   * 9 - gore, dole, sredina, gore_levo, gore_desno, dole_desno
   * 0 - gore, dole, gore_levo, gore_desno, dole_levo, dole_desno
   * - - sredina
   * r - sredina, dole_levo
   * A - gore, gore_levo, gore_desno, dole_levo, dole_desno
   * E - gore, dole, sredina, gore_levo, dole_levo
   * g - gore, sredina, gore_levo, gore_desno, dole, dole_desno
   * J - dole, dole_desno, gore_desno
   * o - sredina, dole, dole_levo, dole_desno
   */

  const int sredina = 3;
  const int dole = 2;
  const int gore = 8;
  const int dole_levo = 7;
  const int dole_desno = 5;
  const int gore_levo =6;
  const int gore_desno = 4;  


void ispisbroja(int broj) {
  switch(broj){
    case 0:{
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_levo, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 1:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 2:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_levo, HIGH);
      break;
      }  
    case 3:{
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 4:{
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(dole_desno, HIGH);
      digitalWrite(gore_desno, HIGH);
      break;
      }
    case 5:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 6:{
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(dole_desno, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(dole_levo, HIGH);
      break;
      }
    case 7:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 8:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_levo, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    case 9:{
      
      //postavi sve na nulu
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      digitalWrite(8, LOW);
      delay(2);
      //postavi novu vrednost
      digitalWrite(gore, HIGH);
      digitalWrite(dole, HIGH);
      digitalWrite(sredina, HIGH);
      digitalWrite(gore_levo, HIGH);
      digitalWrite(gore_desno, HIGH);
      digitalWrite(dole_desno, HIGH);
      break;
      }
    default: break;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int counter = 0;

  /*digitalWrite(2, HIGH);
      digitalWrite(3, HIGH);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      digitalWrite(8, HIGH);*/
  
 for(int i = 0; i < 10; i++){
    ispisbroja(i);
    delay(2000);
  }
}
