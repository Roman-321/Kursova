#ifndef CUSTOMER_H
#define CUSTOMER_H
#include"mainwindow.h"
#include <QDialog>

namespace Ui {
class Customer;
}

class Customer : public QDialog
{
    Q_OBJECT

public:
    explicit Customer(QWidget *parent = nullptr);
    ~Customer();  QString djj() const { return m_djj; }
    void setDjj(const QString& djj);

private slots:
    void on_tableView_activated(const QModelIndex &index);

private:
    QString m_djj;
     QSqlTableModel *da;
    Ui::Customer *ui;
};

#endif // CUSTOMER_H
