#ifndef MAGZINE_MENU_H
#define MAGZINE_MENU_H
#include"mainwindow.h"
#include <QWidget>

namespace Ui {
class Magzine_menu;
}

class Magzine_menu : public QWidget
{
    Q_OBJECT

public:
    explicit Magzine_menu(QWidget *parent = nullptr);

    ~Magzine_menu();
    QString dj() const { return m_dj; }
                void setDj(const QString& dj);
private slots:
    void on_tableView_activated(const QModelIndex &index);

    void on_comboBox_activated(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_label_4_linkActivated(const QString &link);

    void on_label_4_windowTitleChanged(const QString &title);

private:QString m_dj;

    Ui::Magzine_menu *ui;
     QSqlTableModel *da;

};

#endif // MAGZINE_MENU_H
