#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QSqlDatabase>
#include<QMessageBox>
#include<QTextEdit>
#include<QLineEdit>
#include<QCryptographicHash>
#include<QByteArray>
#include <QAbstractButton>
#include<qcryptographichash.h>
#include<QHash>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE




class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr );
    ~MainWindow();

private slots:

    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_inputRejected();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_pushButton_2_pressed();
    void Myg();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
