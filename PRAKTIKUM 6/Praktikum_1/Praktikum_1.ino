//Praktikum 6
//Praktikum 1

#include <Arduino_FreeRTOS.h>

const int buzzer = 7;
const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;

const int extender = 11;

void setup(){
  Serial.begin(9600);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(extender, OUTPUT);

  pinMode(buzzer, OUTPUT);

  xTaskCreate(Task_1,"Task no. 1!",100, NULL, 1, NULL);
  xTaskCreate(Task_2,"Task no. 2!",100, NULL, 2, NULL);
  xTaskCreate(Task_3,"Task no. 3!",100, NULL, 3, NULL);
  xTaskCreate(Neutral_Task,"Neutral_Task",100, NULL, 0, NULL);
}

static void Task_1(void*pvParameters){
  while(1){
    digitalWrite(LED1,HIGH);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(extender,LOW);
    tone(buzzer,200,1000/portTICK_PERIOD_MS);
    Serial.println(F("Task no. 1!"));
    vTaskDelay(1000/portTICK_PERIOD_MS);
  }
}

static void Task_2(void*pvParameters){
  while(1){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,HIGH);
    digitalWrite(LED3,LOW);
    digitalWrite(extender,LOW);
    tone(buzzer,300,1100/portTICK_PERIOD_MS);
    Serial.println(F("Task no. 2!"));
    vTaskDelay(1100/portTICK_PERIOD_MS);
  }
}

static void Task_3(void*pvParameters){
  while(1){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,HIGH);
    digitalWrite(extender,LOW);
    tone(buzzer,400,1200/portTICK_PERIOD_MS);
    Serial.println(F("Task no. 3!"));
    vTaskDelay(1200/portTICK_PERIOD_MS);
  }
}

static void Neutral_Task(void*pvParameters){
  while(1){
    digitalWrite(LED1,LOW);
    digitalWrite(LED2,LOW);
    digitalWrite(LED3,LOW);
    digitalWrite(extender,HIGH);
    tone(buzzer,500,1300);
    Serial.println(F("Neutral_Task"));
    delay(1300);
  }
}

void loop(){}
