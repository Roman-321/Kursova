#include "magzine_menu.h"
#include "ui_magzine_menu.h"
#include"mainwindow.h"
#include"mysql.h"
Magzine_menu::Magzine_menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Magzine_menu)
{
    ui->setupUi(this);
    setWindowTitle("Облік товару");
    My_Sql a;
    a.connect();
    da = new QSqlTableModel(this,a.dbb());
    da->setTable("products");
    da->select();
    da->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(da);
    ui->tableView->horizontalHeader()->setVisible(false);
    ui->tableView->verticalHeader()->setVisible(false);


}
void Magzine_menu::setDj(const QString &dj){
    m_dj = dj;
    ui->label_4->setText(dj);
}
Magzine_menu::~Magzine_menu()
{

    delete ui;
}

void Magzine_menu::on_tableView_activated(const QModelIndex &index)
{

}

void Magzine_menu::on_comboBox_activated(const QString &arg1)
{

}

void Magzine_menu::on_pushButton_clicked()
{
    da->insertRow(da->rowCount());
}

void Magzine_menu::on_pushButton_2_clicked()
{
    da->select();
}

void Magzine_menu::on_pushButton_3_clicked()
{
    //if(  QMessageBox::information(this,"INFO","Ви дійсно хочете видалити виділене по")){
    int SelectRows=ui->tableView->currentIndex().row();
    if(SelectRows>=0){
        da->removeRow(SelectRows);
    }
    else{
         QMessageBox::warning(this,"Error","Ні одне поле не було виділено");
    }

}

void Magzine_menu::on_label_4_linkActivated(const QString &link)
{

}

void Magzine_menu::on_label_4_windowTitleChanged(const QString &title)
{

}
