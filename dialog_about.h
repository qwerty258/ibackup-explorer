#ifndef DIALOG_ABOUT_H
#define DIALOG_ABOUT_H

#include <QDialog>

namespace Ui {
class dialog_about;
}

class dialog_about : public QDialog
{
    Q_OBJECT

public:
    explicit dialog_about(QWidget *parent = nullptr);
    ~dialog_about();

private:
    Ui::dialog_about *ui;
};

#endif // DIALOG_ABOUT_H
