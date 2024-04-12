#include "dialog_about.h"
#include "ui_dialog_about.h"

#include <QDate>

dialog_about::dialog_about(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialog_about)
{
    ui->setupUi(this);
    ui->label_version->setText(QString("\nBased On QT Version: ") + qVersion());
    QString copyright = "MIT License\n\n";
    copyright += QString("Copyright (c) 2021-") + QString::number(QDateTime::currentDateTime().date().year()) + " yaofei zheng\n\n";
    copyright += QString("Permission is hereby granted, free of charge, to any person obtaining a copy ") +
                 "of this software and associated documentation files (the \"Software\"), to deal " +
                 "in the Software without restriction, including without limitation the rights " +
                 "to use, copy, modify, merge, publish, distribute, sublicense, and/or sell " +
                 "copies of the Software, and to permit persons to whom the Software is " +
                 "furnished to do so, subject to the following conditions:\n\n";
    copyright += QString("The above copyright notice and this permission notice shall be included in all ") +
                 "copies or substantial portions of the Software.\n\n";
    copyright += QString("THE SOFTWARE IS PROVIDED \"AS IS\", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR ") +
                 "IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, " +
                 "FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE " +
                 "AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER " +
                 "LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, " +
                 "OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE " +
                 "SOFTWARE.";
    ui->label_copyright->setText(copyright);
}

dialog_about::~dialog_about()
{
    delete ui;
}
