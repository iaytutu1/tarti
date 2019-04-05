#ifndef NUMERICKEYPAD_H
#define NUMERICKEYPAD_H

#include <QWidget>
class QLineEdit;

class ImageButtonPad : public QWidget
{
  Q_OBJECT

public:
  ImageButtonPad( QWidget *parent );

  const QString text() const;

public slots:
  void setText( const QString &text );

signals:
  void textChanged( const QString &text );

private slots:
  void buttonClicked( const QString &text );

private:
  QLineEdit *m_lineEdit;
  QString m_text;
};

#endif // NUMERICKEYPAD_H
