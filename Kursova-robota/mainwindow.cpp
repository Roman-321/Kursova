#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"form2.h"
#include<conio.h>
#include"mysql.h"
#include"hesh.h"
#include"customer.h"
#include"magzine_menu.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Autoresation");
    QObject::connect(ui->pushButton,SIGNAL(),this,SLOT(Myg()));
    window()->setFixedSize(270,225);

}
 static My_Sql sql ;
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{

  ui->lineEdit->setEchoMode(QLineEdit::Password);


}

void MainWindow::on_lineEdit_2_textChanged(const QString &arg1)
{


}
void MainWindow::Myg(){

    QString zap=ui->lineEdit_2->text(),zpp;
      QString t;
     if(zap=="Admin@mail.ru"){
          Magzine_menu *fmr = new Magzine_menu(0);
      t = "Welcom Admin";
      fmr->setDj(t);
      fmr->show();

     }
     else{

         QString zap=ui->lineEdit_2->text(),zpp;
         sql.connect();
          QSqlQuery z;
          z.prepare("SELECT Name,LastName FROM test.people WHERE email=:email;");
          z.bindValue(":email",zap);
          zpp=z.exec() ;
          while(z.next())
          {
               zpp = z.value(0).toString();
          }
          sql.discon();
           QString t;
         Customer *fmr1 = new Customer ;

         t ="Вітаю,"+zpp;
         fmr1->setDjj(t);
         fmr1->show();



     }

}
void MainWindow::on_pushButton_clicked()
{
    Hesh heshing;
    QString inp_pass;
    QString zapr;
    QString input_log;
    QSqlQuery zap;
 Magzine_menu *fmr = new Magzine_menu(0);
 fmr->show();

    if(sql.connect()){
      if(ui->lineEdit->text()!=nullptr&&ui->lineEdit_2->text()!=nullptr
              &&( ui->lineEdit_2->text().endsWith("@gmail.com")
              || ui->lineEdit_2->text().endsWith("mail.ru"))){

          input_log=ui->lineEdit_2->text();
          inp_pass=heshing.Func(ui->lineEdit->text());
         zap.prepare("SELECT COUNT(*) FROM user WHERE password=:pass and email=:email");
         zap.bindValue(":pass",inp_pass);
         zap.bindValue(":email",input_log);
         zap.exec();
         int a=0;
            if(zap.next()){
                a=zap.value(0).toInt();
              }
         if(a!=0){

            Myg(); sql.discon();
            this->hide();


         }
         else{
            QMessageBox::information(this,"Error","Passworw or login wrong ");
         }

         }
         else{
         QMessageBox::warning(this,"Error","Invalid input data");

        }

        }

        else{
          QMessageBox::information(this,"Error","Invalid conection");

        } sql.discon();

}

void MainWindow::on_pushButton_2_clicked()
{
    Form2 *f = new Form2;
    f->show();
    this->hide();

}

void MainWindow::on_lineEdit_inputRejected()
{


}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{

}

void MainWindow::on_pushButton_2_pressed(){

}
