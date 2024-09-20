#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include<QMainWindow>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QListWidget>





class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget* parent = nullptr);
    ~MainWindow();
private slots:
    void addEntry();
    void deleteEntry();

private:
    QWidget* centralWidget;
    QLineEdit* nameField;
    QLineEdit* lastnameField;
    QLineEdit* addressField;
    QLineEdit* emailaddressField;
    QPushButton* addButton;
    QPushButton* deleteButton;
    QListWidget* entryList;

    void setupForm();


};
#endif // MAINWINDOW_H
