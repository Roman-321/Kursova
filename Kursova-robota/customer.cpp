#include "customer.h"
#include "ui_customer.h"
#include"mainwindow.h"
#include"mysql.h"
Customer::Customer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer)
{
    ui->setupUi(this);
    ui->setupUi(this);
    setWindowTitle("Облік продуктів");
    My_Sql a;
    a.connect();
    da = new QSqlTableModel(this,a.dbb());
    da->setTable("products");
    da->select();
    da->setEditStrategy(QSqlTableModel::OnFieldChange);
    ui->tableView->setModel(da);
    ui->tableView->horizontalHeader()->setVisible(false);
    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

Customer::~Customer()
{
    delete ui;
}
void Customer::setDjj(const QString& djj){
    m_djj=djj;
    ui->label_4->setText(m_djj);

}
void Customer::on_tableView_activated(const QModelIndex &index)
{

}
