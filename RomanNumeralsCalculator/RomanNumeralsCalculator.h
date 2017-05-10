#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RomanNumeralsCalculator.h"

class RomanNumeralsCalculator : public QMainWindow
{
    Q_OBJECT


public:
    RomanNumeralsCalculator(QWidget *parent = Q_NULLPTR);
	~RomanNumeralsCalculator();

private slots:
    void IButtonClicked();
	void VButtonClicked();
	void XButtonClicked();
	void LButtonClicked();
	void CButtonClicked();
	void DButtonClicked();
	void MButtonClicked();

	
	
	//void DigitClicked();
/*	void AddingClicked();
	void SubtractingClicked();
	void MultiplicationClicked();
	void DivisionClicked();
	void EqualClicked();
	void BackspaceClicked();
	void ClearClicked();
*/

private:
    Ui::RomanNumeralsCalculatorClass* ui;
};
