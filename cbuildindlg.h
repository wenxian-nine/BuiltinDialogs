#ifndef CBUILDINDLG_H
#define CBUILDINDLG_H

#include <QDialog>
#include<QtWidgets>
class CBuildinDlg : public QDialog
{
    Q_OBJECT

public:
    CBuildinDlg(QWidget *parent = nullptr);
    ~CBuildinDlg();
private:
    QTextEdit* displayTextEdit;
    QPushButton* colorPushBtn;
    QPushButton* errorPushBtn;
    QPushButton* filePushBtn;
    QPushButton* fontPushBtn;
    QPushButton* inputPushBtn;
    QPushButton* pagePushBtn;
    QPushButton* progressPushBtn;
    QPushButton* printPushBtn;
private slots:
    void doPushBtn();
    //void doTextcolor();
};
#endif // CBUILDINDLG_H
