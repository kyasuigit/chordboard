#ifndef HINTWINDOW_H
#define HINTWINDOW_H

/// @file hintWindow.h
/// @brief This class is used to create and another window for displaying a hint to the user for drum parts. The class does not contain anything besides a UI creation and a deconstructor.
/// @authors Kevin Yang

#include <QDialog>

namespace Ui {
class hintWindow;
}

class hintWindow : public QDialog
{
    Q_OBJECT

public:

    /// @brief This is the constructor for the class.
    /// @details This constructor contains a number of QT arguments that are used to create a QWidget for the hint window.
    /// @param QWidget *parent A pointer to the parent QWidget.
    /// @param parent
    /// @param Ui A new Ui.
    /// @author Kevin Yang
    explicit hintWindow(QWidget *parent = nullptr);

    /// @brief This is the deconstructor for the class.
    /// @details This deconstructor is responsible for only destroying trhe UI for the hint window.
    /// @author Kevin Yang
    ~hintWindow();

private:
    Ui::hintWindow *ui;
};

#endif // HINTWINDOW_H
