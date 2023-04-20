/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *lblTitulo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *pte_input;
    QPlainTextEdit *pte_output;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb_json;
    QRadioButton *rb_xml;
    QPushButton *btn_formatar;
    QPushButton *btn_copy;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1107, 643);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color:\"#595959\""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lblTitulo = new QLabel(centralwidget);
        lblTitulo->setObjectName(QString::fromUtf8("lblTitulo"));
        lblTitulo->setGeometry(QRect(10, 10, 241, 51));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        lblTitulo->setFont(font);
        lblTitulo->setStyleSheet(QString::fromUtf8("color: \"#3AA713\""));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 70, 1081, 431));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pte_input = new QPlainTextEdit(horizontalLayoutWidget);
        pte_input->setObjectName(QString::fromUtf8("pte_input"));
        pte_input->setStyleSheet(QString::fromUtf8("background-color:\"#9B9B9B\""));

        horizontalLayout->addWidget(pte_input);

        pte_output = new QPlainTextEdit(horizontalLayoutWidget);
        pte_output->setObjectName(QString::fromUtf8("pte_output"));
        pte_output->setStyleSheet(QString::fromUtf8("background-color:\"#9B9B9B\""));

        horizontalLayout->addWidget(pte_output);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(9, 510, 191, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rb_json = new QRadioButton(horizontalLayoutWidget_2);
        rb_json->setObjectName(QString::fromUtf8("rb_json"));
        QFont font1;
        font1.setPointSize(17);
        rb_json->setFont(font1);
        rb_json->setStyleSheet(QString::fromUtf8("color: \"#FFFFFF\""));
        rb_json->setChecked(true);

        horizontalLayout_2->addWidget(rb_json);

        rb_xml = new QRadioButton(horizontalLayoutWidget_2);
        rb_xml->setObjectName(QString::fromUtf8("rb_xml"));
        rb_xml->setFont(font1);
        rb_xml->setStyleSheet(QString::fromUtf8("color: \"#FFFFFF\""));

        horizontalLayout_2->addWidget(rb_xml);

        btn_formatar = new QPushButton(centralwidget);
        btn_formatar->setObjectName(QString::fromUtf8("btn_formatar"));
        btn_formatar->setGeometry(QRect(730, 510, 356, 37));
        QFont font2;
        font2.setPointSize(19);
        btn_formatar->setFont(font2);
        btn_formatar->setStyleSheet(QString::fromUtf8("background-color:\"#0D6015\"; color: \"#FFFFFF\""));
        btn_copy = new QPushButton(centralwidget);
        btn_copy->setObjectName(QString::fromUtf8("btn_copy"));
        btn_copy->setGeometry(QRect(1000, 40, 89, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1107, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        lblTitulo->setText(QApplication::translate("MainWindow", "JSON FORMATTER", nullptr));
        pte_input->setPlaceholderText(QApplication::translate("MainWindow", "Insira o texto", nullptr));
        rb_json->setText(QApplication::translate("MainWindow", "Json", nullptr));
        rb_xml->setText(QApplication::translate("MainWindow", "XML", nullptr));
        btn_formatar->setText(QApplication::translate("MainWindow", "Format", nullptr));
        btn_copy->setText(QApplication::translate("MainWindow", "Copy", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
