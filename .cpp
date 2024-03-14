#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QComboBox>

void populateComboBox(QComboBox* comboBox, const QStringList& units) {
    for (const QString& unit : units) {
        comboBox->addItem(unit);
    }
}

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Unit Converter");

    QGridLayout *gridLayout = new QGridLayout();

    // Define the units for each conversion type
    QStringList lengthUnits = {"Meters (m)", "Feet (ft)", "Milimeters (mm)", "Inch (in)"};
    QStringList volumeUnits = {"US gallons (gal)", "Cubic meters (m³)", "Liters (l)", "Barrels (bbl)"};
    QStringList volumetricFlowRateUnits = {"Gallons per minute (gpm)", "Barrels per minute (bpm)", "Cubic meters per minute (m³/min)", "Liter per second (l/s)"};
    QStringList capacityUnits = {"Cubic meter per hour (m³/hr)", "US gallons per minute (us gal/min)", "Barrels per day (b/day)"};
    QStringList weightUnits = {"Pounds-force (lbf)", "Tonnes (t)", "Kilograms-force (kgf)", "Newtons (N)"};
    QStringList weightPerLengthUnits = {"Pounds per foot (lb/ft)", "Kilograms per meter (kg/m)"};
    QStringList torqueUnits = {"Newton meter (Nm)", "Kilogram-force meter (kgfm)", "Pound-force foot (lbfft)"};
    QStringList dynamicViscosityUnits = {"Centipoise (cP)", "Pascal-second (Pa·s)"};
    QStringList concentrationSolutionUnits = {"Kilogram/liter (kg/L)", "Part/million (ppm)", "Pound/cubic foot (lb/ft³)"};
    QStringList densityUnits = {"Kilograms per cubic decimeter (kg/dm³)", "Pounds per gallon (lb/gal)", "Specific gravity", "Kilograms per cubic meter (kg/m³)"};
    QStringList pressureUnits = {"Bars", "Kilopascals (kPa)", "Atmospheres (atm)", "Pounds per square inch (psi)"};
    QStringList pressureGradientUnits = {"Psi/ft", "Bars/10m", "KPa/m"};
    QStringList temperatureUnits = {"Celsius degree (°C)", "Fahrenheit degree (°F)", "Kelvin degree (K)"};
    QStringList temperatureGradientUnits = {"Celsius degree per meter (°C/m)", "Fahrenheit degree per foot (°F/ft)", "Kelvin degree per meter (K/m)"};
    QStringList velocityUnits = {"Feet per minute (ft/min)", "Meters per second (m/s)"};
    QStringList powerUnits = {"Horse power (HP)", "Kilowatts (kW)"};
    QStringList bitNozzlesDiameterUnits = {"Millimeters (mm)", "Inches (in)"};
    
    // Add all categories to a list for easy iteration
    QVector<QPair<QStringList, QString>> allCategories = {
        {lengthUnits, "Length"},
        {volumeUnits, "Volume"},
        {volumetricFlowRateUnits, "Volumetric Flow Rate"},
        {capacityUnits, "Capacity/Displacement"},
        {weightUnits, "Weight"},
        {weightPerLengthUnits, "Weight Per Length"},
        {torqueUnits, "Torque"},
        {dynamicViscosityUnits, "Dynamic Viscosity"},
        {concentrationSolutionUnits, "Concentration Solution"},
        {densityUnits, "Density"},
        {pressureUnits, "Pressure"},
        {pressureGradientUnits, "Pressure Gradient"},
        {temperatureUnits, "Temperature"},
        {temperatureGradientUnits, "Temperature Gradient"},
        {velocityUnits, "Velocity"},
        {powerUnits, "Power"},
        {bitNozzlesDiameterUnits, "Bit Nozzles Diameter"}
    };

  
    // Length
    int row = 0;
    QComboBox *lengthInputCombo = new QComboBox();
    QComboBox *lengthOutputCombo = new QComboBox();
    populateComboBox(lengthInputCombo, lengthUnits);
    populateComboBox(lengthOutputCombo, lengthUnits);
    gridLayout->addWidget(new QLabel("Length"), row, 0);
    gridLayout->addWidget(lengthInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(lengthOutputCombo, row, 5);

    // Volume
    row++;
    QComboBox *volumeInputCombo = new QComboBox();
    QComboBox *volumeOutputCombo = new QComboBox();
    populateComboBox(volumeInputCombo, volumeUnits);
    populateComboBox(volumeOutputCombo, volumeUnits);
    gridLayout->addWidget(new QLabel("Volume"), row, 0);
    gridLayout->addWidget(volumeInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(volumeOutputCombo, row, 5);

    // Volumetric Flow Rate
    row++;
    QComboBox *volumetricFlowRateInputCombo = new QComboBox();
    QComboBox *volumetricFlowRateOutputCombo = new QComboBox();
    populateComboBox(volumetricFlowRateInputCombo, volumetricFlowRateUnits);
    populateComboBox(volumetricFlowRateOutputCombo, volumetricFlowRateUnits);
    gridLayout->addWidget(new QLabel("Volumetric Flow Rate"), row, 0);
    gridLayout->addWidget(volumetricFlowRateInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(volumetricFlowRateOutputCombo, row, 5);

    // Capacity/Displacement
    row++;
    QComboBox *capacityInputCombo = new QComboBox();
    QComboBox *capacityOutputCombo = new QComboBox();
    populateComboBox(capacityInputCombo, capacityUnits);
    populateComboBox(capacityOutputCombo, capacityUnits);
    gridLayout->addWidget(new QLabel("Capacity / Displacement"), row, 0);
    gridLayout->addWidget(capacityInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(capacityOutputCombo, row, 5);

    // Weight
    row++;
    QComboBox *weightInputCombo = new QComboBox();
    QComboBox *weightOutputCombo = new QComboBox();
    populateComboBox(weightInputCombo, weightUnits);
    populateComboBox(weightOutputCombo, weightUnits);
    gridLayout->addWidget(new QLabel("Weight"), row, 0);
    gridLayout->addWidget(weightInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(weightOutputCombo, row, 5);

   // Weight Per Length
    row++;
    QComboBox *weightPerLengthInputCombo = new QComboBox();
    QComboBox *weightPerLengthOutputCombo = new QComboBox();
    populateComboBox(weightPerLengthInputCombo, QStringList{"Pounds per foot (lb/ft)", "Kilograms per meter (kg/m)"});
    populateComboBox(weightPerLengthOutputCombo, QStringList{"Pounds per foot (lb/ft)", "Kilograms per meter (kg/m)"});
    gridLayout->addWidget(new QLabel("Weight Per Length"), row, 0);
    gridLayout->addWidget(weightPerLengthInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(weightPerLengthOutputCombo, row, 5);

    // Torque
    row++;
    QComboBox *torqueInputCombo = new QComboBox();
    QComboBox *torqueOutputCombo = new QComboBox();
    populateComboBox(torqueInputCombo, QStringList{"Newton meter (Nm)", "Kilogram-force meter (kgfm)", "Pound-force foot (lbfft)"});
    populateComboBox(torqueOutputCombo, QStringList{"Newton meter (Nm)", "Kilogram-force meter (kgfm)", "Pound-force foot (lbfft)"});
    gridLayout->addWidget(new QLabel("Torque"), row, 0);
    gridLayout->addWidget(torqueInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(torqueOutputCombo, row, 5);

    // Dynamic Viscosity
    row++;
    QComboBox *dynamicViscosityInputCombo = new QComboBox();
    QComboBox *dynamicViscosityOutputCombo = new QComboBox();
    populateComboBox(dynamicViscosityInputCombo, QStringList{"Centipoise (cP)", "Pascal-second (Pa·s)"});
    populateComboBox(dynamicViscosityOutputCombo, QStringList{"Centipoise (cP)", "Pascal-second (Pa·s)"});
    gridLayout->addWidget(new QLabel("Dynamic Viscosity"), row, 0);
    gridLayout->addWidget(dynamicViscosityInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(dynamicViscosityOutputCombo, row, 5);

    // Concentration Solution
    row++;
    QComboBox *concentrationSolutionInputCombo = new QComboBox();
    QComboBox *concentrationSolutionOutputCombo = new QComboBox();
    populateComboBox(concentrationSolutionInputCombo, QStringList{"Kilogram/liter (kg/L)", "Part/million (ppm)", "Pound/cubic foot (lb/ft³)"});
    populateComboBox(concentrationSolutionOutputCombo, QStringList{"Kilogram/liter (kg/L)", "Part/million (ppm)", "Pound/cubic foot (lb/ft³)"});
    gridLayout->addWidget(new QLabel("Concentration Solution"), row, 0);
    gridLayout->addWidget(concentrationSolutionInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(concentrationSolutionOutputCombo, row, 5);

    // Density
    row++;
    QComboBox *densityInputCombo = new QComboBox();
    QComboBox *densityOutputCombo = new QComboBox();
    populateComboBox(densityInputCombo, QStringList{"Kilograms per cubic decimeter (kg/dm³)", "Pounds per gallon (lb/gal)", "Specific gravity", "Kilograms per cubic meter (kg/m³)"});
    populateComboBox(densityOutputCombo, QStringList{"Kilograms per cubic decimeter (kg/dm³)", "Pounds per gallon (lb/gal)", "Specific gravity", "Kilograms per cubic meter (kg/m³)"});
    gridLayout->addWidget(new QLabel("Density"), row, 0);
    gridLayout->addWidget(densityInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(densityOutputCombo, row, 5);

    // Pressure
    row++;
    QComboBox *pressureInputCombo = new QComboBox();
    QComboBox *pressureOutputCombo = new QComboBox();
    populateComboBox(pressureInputCombo, QStringList{"Bars", "Kilopascals (kPa)", "Atmospheres (atm)", "Pounds per square inch (psi)"});
    populateComboBox(pressureOutputCombo, QStringList{"Bars", "Kilopascals (kPa)", "Atmospheres (atm)", "Pounds per square inch (psi)"});
    gridLayout->addWidget(new QLabel("Pressure"), row, 0);
    gridLayout->addWidget(pressureInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(pressureOutputCombo, row, 5);

    // Pressure Gradient
    row++;
    QComboBox *pressureGradientInputCombo = new QComboBox();
    QComboBox *pressureGradientOutputCombo = new QComboBox();
    populateComboBox(pressureGradientInputCombo, QStringList{"Psi/ft", "Bars/10m", "KPa/m"});
    populateComboBox(pressureGradientOutputCombo, QStringList{"Psi/ft", "Bars/10m", "KPa/m"});
    gridLayout->addWidget(new QLabel("Pressure Gradient"), row, 0);
    gridLayout->addWidget(pressureGradientInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(pressureGradientOutputCombo, row, 5);

    // Temperature
    row++;
    QComboBox *temperatureInputCombo = new QComboBox();
    QComboBox *temperatureOutputCombo = new QComboBox();
    populateComboBox(temperatureInputCombo, QStringList{"Celsius degree (°C)", "Fahrenheit degree (°F)", "Kelvin degree (K)"});
    populateComboBox(temperatureOutputCombo, QStringList{"Celsius degree (°C)", "Fahrenheit degree (°F)", "Kelvin degree (K)"});
    gridLayout->addWidget(new QLabel("Temperature"), row, 0);
    gridLayout->addWidget(temperatureInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(temperatureOutputCombo, row, 5);

    // Temperature Gradient
    row++;
    QComboBox *temperatureGradientInputCombo = new QComboBox();
    QComboBox *temperatureGradientOutputCombo = new QComboBox();
    populateComboBox(temperatureGradientInputCombo, QStringList{"Celsius degree per meter (°C/m)", "Fahrenheit degree per foot (°F/ft)", "Kelvin degree per meter (K/m)"});
    populateComboBox(temperatureGradientOutputCombo, QStringList{"Celsius degree per meter (°C/m)", "Fahrenheit degree per foot (°F/ft)", "Kelvin degree per meter (K/m)"});
    gridLayout->addWidget(new QLabel("Temperature Gradient"), row, 0);
    gridLayout->addWidget(temperatureGradientInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(temperatureGradientOutputCombo, row, 5);

    // Velocity
    row++;
    QComboBox *velocityInputCombo = new QComboBox();
    QComboBox *velocityOutputCombo = new QComboBox();
    populateComboBox(velocityInputCombo, QStringList{"Feet per minute (ft/min)", "Meters per second (m/s)"});
    populateComboBox(velocityOutputCombo, QStringList{"Feet per minute (ft/min)", "Meters per second (m/s)"});
    gridLayout->addWidget(new QLabel("Velocity"), row, 0);
    gridLayout->addWidget(velocityInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(velocityOutputCombo, row, 5);

    // Power
    row++;
    QComboBox *powerInputCombo = new QComboBox();
    QComboBox *powerOutputCombo = new QComboBox();
    populateComboBox(powerInputCombo, QStringList{"Horse power (HP)", "Kilowatts (kW)"});
    populateComboBox(powerOutputCombo, QStringList{"Horse power (HP)", "Kilowatts (kW)"});
    gridLayout->addWidget(new QLabel("Power"), row, 0);
    gridLayout->addWidget(powerInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(powerOutputCombo, row, 5);

    // Bit Nozzles Diameter
    row++;
    QComboBox *bitNozzlesDiameterInputCombo = new QComboBox();
    QComboBox *bitNozzlesDiameterOutputCombo = new QComboBox();
    populateComboBox(bitNozzlesDiameterInputCombo, QStringList{"Millimeters (mm)", "Inches (in)"});
    populateComboBox(bitNozzlesDiameterOutputCombo, QStringList{"Millimeters (mm)", "Inches (in)"});
    gridLayout->addWidget(new QLabel("Bit Nozzles Diameter"), row, 0);
    gridLayout->addWidget(bitNozzlesDiameterInputCombo, row, 1);
    gridLayout->addWidget(new QLineEdit(), row, 2);
    gridLayout->addWidget(new QPushButton("Convert"), row, 3);
    gridLayout->addWidget(new QLabel("Output"), row, 4);
    gridLayout->addWidget(bitNozzlesDiameterOutputCombo, row, 5);



    // At the end, after setting up all conversion types...
    window.setLayout(gridLayout);
    window.resize(1200, 800); // Adjust the size if necessary
    window.show();

    return app.exec();
}

