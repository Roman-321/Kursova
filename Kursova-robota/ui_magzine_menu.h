/********************************************************************************
** Form generated from reading UI file 'magzine_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAGZINE_MENU_H
#define UI_MAGZINE_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Magzine_menu
{
public:
    QTableView *tableView;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label_4;
    QLabel *label_5;

    void setupUi(QWidget *Magzine_menu)
    {
        if (Magzine_menu->objectName().isEmpty())
            Magzine_menu->setObjectName(QStringLiteral("Magzine_menu"));
        Magzine_menu->resize(400, 398);
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(8);
        font.setBold(false);
        font.setWeight(50);
        Magzine_menu->setFont(font);
        tableView = new QTableView(Magzine_menu);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 130, 271, 271));
        label = new QLabel(Magzine_menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 100, 101, 21));
        label_2 = new QLabel(Magzine_menu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 100, 61, 20));
        label_3 = new QLabel(Magzine_menu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 100, 161, 21));
        pushButton = new QPushButton(Magzine_menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(270, 130, 131, 31));
        pushButton_2 = new QPushButton(Magzine_menu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(270, 370, 131, 31));
        pushButton_3 = new QPushButton(Magzine_menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(270, 160, 131, 31));
        label_4 = new QLabel(Magzine_menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(120, 55, 171, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe Script"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setWeight(50);
        label_4->setFont(font1);
        label_5 = new QLabel(Magzine_menu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(90, 20, 181, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Segoe Script"));
        font2.setPointSize(12);
        label_5->setFont(font2);

        retranslateUi(Magzine_menu);

        QMetaObject::connectSlotsByName(Magzine_menu);
    } // setupUi

    void retranslateUi(QWidget *Magzine_menu)
    {
        Magzine_menu->setWindowTitle(QApplication::translate("Magzine_menu", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Magzine_menu", "ID", Q_NULLPTR));
        label_2->setText(QApplication::translate("Magzine_menu", "\320\242\320\276\320\262\320\260\321\200", Q_NULLPTR));
        label_3->setText(QApplication::translate("Magzine_menu", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 ", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Magzine_menu", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\320\265", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Magzine_menu", "\320\236\320\261\320\275\320\276\320\262\320\270\321\202\320\270 ", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Magzine_menu", "\320\222\320\270\320\264\320\260\320\273\320\270\321\202\320\270 \320\262\320\270\320\261\321\200\320\260\320\275e \320\277\320\276\320\273e", Q_NULLPTR));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("Magzine_menu", "              \"DISK\"", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Magzine_menu: public Ui_Magzine_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAGZINE_MENU_H
