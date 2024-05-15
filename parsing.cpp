#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::AbaddonParsing()
{
    // ABADDON
    QNetworkRequest request(QUrl("https://www.dotabuff.com/heroes/abaddon/counters"));
    QNetworkReply *reply = manager->get(request);
    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error()) {
            qDebug() << "ERROR!";
            qDebug() << reply->errorString();
            ui->stackedWidget->setCurrentIndex(2);
        } else {
            QByteArray responseData = reply->readAll();
            QString responseString = QString::fromUtf8(responseData);

            int index = responseString.indexOf("<table class=");
            responseString = responseString.mid(index);

            int index1 = responseString.indexOf("/table>");
            responseString = responseString.left(index1 + 7);

            QTextDocument doc;
            doc.setHtml(responseString);

            QTextTable* textTable = doc.findChild<QTextTable *>();

            for (int row = 1; row < textTable->rows(); ++row){
                AbaddonCounters.append(QList<QString>{textTable->cellAt(row, 1).firstCursorPosition().block().text(), textTable->cellAt(row, 3).firstCursorPosition().block().text()});
            }
            AbaddonCounters.append(QList<QString>{"Abaddon", "1000.0%"});
            std::sort(AbaddonCounters.begin(), AbaddonCounters.end(), [](const QList<QString> &a, const QList<QString> &b) {
                return a.first() < b.first();
            });
            for (int i=0; i<124;++i){
                AbaddonCounters[i][1].chop(1);
                double counterValue = AbaddonCounters[i][1].toDouble();
                counterValue = 100 - counterValue;
                AbaddonCounters[i][1] = QString::number(counterValue);
            }

        }
        reply->deleteLater();
    });
}

void MainWindow::AlchemistParsing()
{
    QNetworkRequest request(QUrl("https://www.dotabuff.com/heroes/alchemist/counters"));
    QNetworkReply *reply = manager->get(request);
    QObject::connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error()) {
            qDebug() << "ERROR!";
            qDebug() << reply->errorString();
            ui->stackedWidget->setCurrentIndex(2);
        } else {
            QByteArray responseData = reply->readAll();
            QString responseString = QString::fromUtf8(responseData);

            int index = responseString.indexOf("<table class=");
            responseString = responseString.mid(index);

            int index1 = responseString.indexOf("/table>");
            responseString = responseString.left(index1 + 7);

            QTextDocument doc;
            doc.setHtml(responseString);

            QTextTable* textTable = doc.findChild<QTextTable *>();

            for (int row = 1; row < textTable->rows(); ++row){
                AlchemistCounters.append(QList<QString>{textTable->cellAt(row, 1).firstCursorPosition().block().text(), textTable->cellAt(row, 3).firstCursorPosition().block().text()});
            }
            AlchemistCounters.append(QList<QString>{"Alchemist", "1000.0%"});
            std::sort(AlchemistCounters.begin(), AlchemistCounters.end(), [](const QList<QString> &a, const QList<QString> &b) {
                return a.first() < b.first();
            });
            for (int i=0; i<124;++i){
                AlchemistCounters[i][1].chop(1);
                double counterValue = AlchemistCounters[i][1].toDouble();
                counterValue = 100 - counterValue;
                AlchemistCounters[i][1] = QString::number(counterValue);
            }

        }
        reply->deleteLater();
    });
}
