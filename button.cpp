#include "button.h"

Button::Button(QWidget *parent)
    : QPushButton(parent)
{
    m_shadowEffect = new QGraphicsDropShadowEffect(this);
    m_shadowEffect->setColor(QColor(0, 0, 0, 255 * 0.3));
    m_shadowEffect->setXOffset(0);
    m_shadowEffect->setYOffset(4);
    m_shadowEffect->setBlurRadius(12);

    // hide shadow
    m_shadowEffect->setEnabled(false);

    setGraphicsEffect(m_shadowEffect);
}

void Button::enterEvent(QEvent *e)
{
    QPushButton::enterEvent(e);

    m_shadowEffect->setEnabled(true);
}

void Button::leaveEvent(QEvent *e)
{
    QPushButton::leaveEvent(e);

    m_shadowEffect->setEnabled(false);
}
