#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTreeView>
#include <QFileSystemModel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>

QT_BEGIN_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void onOpenButtonClicked();
    void onCancelButtonClicked();


private:
    QTreeView* treeView;
    QFileSystemModel* fileSystemModel;
    QPushButton* openButton;
    QPushButton* cancelButton;
    QLabel* selectedPathLabel;


};
#endif // MAINWINDOW_H
