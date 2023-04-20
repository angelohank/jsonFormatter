#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QJsonObject>
#include <QJsonDocument>

MainWindow::MainWindow( QWidget* parent ) :
    QMainWindow( parent ),
    ui( new Ui::MainWindow ) {
    ui->setupUi( this );
}

MainWindow::~MainWindow() {
    delete ui;
}

QString MainWindow::formatJson( const QString& jsonString ) {
    QJsonParseError error;
    QJsonDocument doc = QJsonDocument::fromJson( jsonString.toUtf8(), &error );

    if ( error.error != QJsonParseError::NoError ) {
        // handle parse error
        return "";
    }

    QJsonObject jsonObj = doc.object();
    return QString( QJsonDocument( jsonObj ).toJson( QJsonDocument::Indented ) );
}

void MainWindow::on_btn_formatar_clicked() {
    ui->pte_output->setPlainText( formatJson( ui->pte_input->toPlainText() ) );

}
