#include <LinearRegression.h>

// Define Objects
LinearRegression lr;

// Define Variables
float values[2];
void setup() {

	// Start Serial
    Serial.begin(115200);
    
}

void loop() {

	// Set Data
    Serial.println("Learning Data...");
    lr.Data(-587);
    lr.Data(-122);
    lr.Data(307);
    lr.Data(621);
    lr.Data(678);
    lr.Data(446);
    lr.Data(-53);
    lr.Data(-481);
    lr.Data(-758);
    lr.Data(-707);
    lr.Data(-344);
    lr.Data(90);
    lr.Data(513);
    lr.Data(700);
    lr.Data(534);
    lr.Data(146);
    lr.Data(-381);
    

	// Datas
	Serial.print(lr.Samples()); Serial.println(" Point Linear Regression Calculation...");
    Serial.print("Correlation: "); Serial.println(lr.Correlation());
    Serial.print("Values: "); lr.Parameters(values); Serial.print("Y = "); Serial.print(values[0],4); Serial.print("*X + "); Serial.println(values[1],4);
    Serial.print("Values: "); lr.Parameters(values); Serial.print(" a = "); Serial.print(values[0],4); Serial.print(" b = "); Serial.println(values[1],4); Serial.println("");

	// Reset
    lr.Reset();
    
    delay(5000);
    
}
