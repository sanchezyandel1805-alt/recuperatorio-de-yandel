int rojo = 8;
int amarillo = 9;
int verde = 10;
configuración vacía() {
pinMode(rojo, SALIDA);
pinMode(amarillo, SALIDA);
pinMode(verde, SALIDA);
}
void loop() {
// Verde encendido
digitalWrite(verde, HIGH);
escritura digital(amarillo, BAJO);
escritura digital(rojo, BAJO);
retraso(5000);
// Amarillo encendido
digitalWrite(verde, LOW);
escritura digital(amarillo, ALTA);
retraso(2000);

// Rojo encendido
digitalWrite(amarillo, LOW);
escritura digital(rojo, ALTO);
retraso(5000);
}