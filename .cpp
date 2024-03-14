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
    QStringList weight/lenghtUnits = {"Pounds per feet (lb/ft)", "Kilograms per meter (kg/m)"};
    QStringList TorqueUnits = {"Kilograms-force per meter (kgf*m)", "Newton meter (N*m)", "pound-force foot (lbf*ft)"};
    QStringList DynamicViscosityUnits = {"CentiPoise(cP)", "Pascal*second(Pa*s)"};
    QStringList Concentration-SolutionUnits = {"Kilogram/ liter(Kg/l)", "part/milion(ppm)", "Pound / cubic foot(lb/ft3)"};
    QStringList DensityUnits = {"Kilograms per cubic decimeter(Kg/dm³)", "pound per gallon(ppg)", "specific gravity (sg)", "kilograms per cubic meter (kg/m3)"};
    QStringList PreusureUnits = {"bars(bar)", "pound per square inch (psi)", "atmospheras (atm)", "kiloPascals", "Kilograms-force per square (kgf/cm2)"};
    QStringList PreusureGradientUnits = {"psi/ft", "bars/10", "KPa/m"};
    QStringList TemperatureUnits = {"Celsius degree (deg.C)", "Fahrenheit degree (deg.F)" , "Kelvin degree (deg.K)"}
    QStringList TemperatureGradintUnits = {"Celsius degree per meter (deg.C/m)", "Fahrenheit degree per feet (deg.F/ft)", " Kelvin degree per meter(deg.K/m)"}
    QStringList VelocityUnits = {"feet per minute (ft/min)", "Meters per second (m/s)"}
    QStringList PowerUnits = {"Hopse Power (CP)", "Hopse Powers (HP)", "Kilowatt (KW)"}
    QStringList BitNozzleUnits = {"millimeters (mm)", "k/22"}
  
    // Create the input and output combo boxes for each category
    // Length
    QComboBox *lengthInputCombo = new QComboBox();
    QComboBox *lengthOutputCombo = new QComboBox();
    populateComboBox(lengthInputCombo, lengthUnits);
    populateComboBox(lengthOutputCombo, lengthUnits);

    // Create the grid layout for each conversion type
    int row = 0;
    // Length
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

    // ... (continue adding rows for each conversion type, increasing the row index each time)

    // At the end, after setting up all conversion types...
    window.setLayout(gridLayout);
    window.resize(1200, 800); // Adjust the size if necessary
    window.show();

    return app.exec();
}

