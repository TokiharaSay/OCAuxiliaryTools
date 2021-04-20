#ifndef METHOD_H
#define METHOD_H

#include <QDir>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QObject>
#include <QTableWidget>
#include <QWidget>

class Method : public QMainWindow {
    Q_OBJECT
public:
    explicit Method(QWidget* parent = nullptr);

    void goTable(QTableWidget* table);
    QWidget* getSubTabWidget(int m, int s);
    void goACPITable(QTableWidget* table);
    void goBooterTable(QTableWidget* table);
    void goDPTable(QTableWidget* table);
    void goKernelTable(QTableWidget* table);
    void goMiscTable(QTableWidget* table);
    void goNVRAMTable(QTableWidget* table);
    QWidget* getSubTab1(int m, int s);
    QWidget* getSubTab2(int m, int s);
    void findTable(QString findText);

public slots:
    void on_GenerateEFI();
    void on_btnExportMaster();
    void on_btnImportMaster();

signals:
};

#endif // METHOD_H