#ifndef barcodeprinter_H
#define barcodeprinter_H

#include <QObject>
#include <QtPrintSupport>

#define CODE128_B_START 104
#define CODE128_STOP 106

class barcodeprinter : public QObject
{
    Q_OBJECT
public:
    explicit barcodeprinter(QObject *parent = 0);

    /** Lists all available printers */
    QStringList getAvailablePrinters();
    /** Configures the printer, if none selected defaults to pdf printer */
    bool configurePrinter(QString printerName = QString());
    /** Prints the text as a barcode */
    void printBarcode(QString barcodeText);

private:
    /** Configures the page */
    void configurePage();

    /** Adds start/check/stop characters to the code */
    QString encodeBarcode(QString code);

    /** Calculates the checksum character from the code */
    int calculateCheckCharacter(QString code);

    int codeToChar(int code);
    int charToCode(int ch);

    bool printerConfigured;
    QPrinter mPrinter;

};

#endif // barcodeprinter_H
