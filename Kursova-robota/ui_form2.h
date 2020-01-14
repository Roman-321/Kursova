/********************************************************************************
** Form generated from reading UI file 'form2.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM2_H
#define UI_FORM2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form2
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *Form2)
    {
        if (Form2->objectName().isEmpty())
            Form2->setObjectName(QStringLiteral("Form2"));
        Form2->resize(271, 229);
        lineEdit = new QLineEdit(Form2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(60, 30, 131, 20));
        lineEdit_2 = new QLineEdit(Form2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(60, 120, 131, 20));
        lineEdit_3 = new QLineEdit(Form2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 150, 131, 20));
        pushButton = new QPushButton(Form2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 180, 91, 31));
        pushButton->setAutoDefault(true);
        label = new QLabel(Form2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 120, 47, 13));
        label_2 = new QLabel(Form2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 150, 47, 13));
        label_3 = new QLabel(Form2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 47, 13));
        lineEdit_4 = new QLineEdit(Form2);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(60, 60, 131, 20));
        lineEdit_5 = new QLineEdit(Form2);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(60, 90, 131, 20));
        label_4 = new QLabel(Form2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(0, 60, 51, 16));
        label_5 = new QLabel(Form2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(6, 90, 51, 20));
        label_6 = new QLabel(Form2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 10, 161, 20));

        retranslateUi(Form2);

        QMetaObject::connectSlotsByName(Form2);
    } // setupUi

    void retranslateUi(QWidget *Form2)
    {
        Form2->setWindowTitle(QApplication::translate("Form2", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Form2", "Regist", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("Form2", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        label->setText(QApplication::translate("Form2", "Password", Q_NULLPTR));
        label_2->setText(QApplication::translate("Form2", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("Form2", "email", Q_NULLPTR));
        label_4->setText(QApplication::translate("Form2", "First Name", Q_NULLPTR));
        label_5->setText(QApplication::translate("Form2", "Last Name", Q_NULLPTR));
        label_6->setText(QApplication::translate("Form2", "Please tell information about you", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form2: public Ui_Form2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM2_H
