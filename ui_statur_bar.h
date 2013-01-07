#ifndef UI_STATUR_BAR_H
#define UI_STATUR_BAR_H

#include <QWidget>
#include <string>


using namespace std;

namespace Ui {
class UI_STATUR_BAR;
}

class UI_STATUR_BAR : public QWidget
{
    Q_OBJECT
    
public:
    explicit UI_STATUR_BAR(QWidget *parent = 0);
    ~UI_STATUR_BAR();
    
    //EXTRA METHODS - START

    void setMessage(string message);

    //EXTRA METHODS - END

private slots:


private:
    Ui::UI_STATUR_BAR *ui;
};

#endif // UI_STATUR_BAR_H
