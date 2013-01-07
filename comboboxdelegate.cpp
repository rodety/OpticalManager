#include "comboboxdelegate.h"
#include <QtGui>

/*----------------------------------------------------------------------------*/

ComboBoxDelegate::ComboBoxDelegate(QObject *parent) : QItemDelegate(parent)
{

}

/*----------------------------------------------------------------------------*/

void ComboBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
  //if (!editor->metaObject()->userProperty().isValid())
  //{
  QComboBox * cb = qobject_cast<QComboBox *>(editor);
  if (cb)
  {
    QString text = index.data().toString();
    int i = cb->findText(text);
    if (i > -1)
      cb->setCurrentIndex(i);
    else if (cb->isEditable())
      cb->setEditText(text);
    return;
  }
  //}
  QItemDelegate::setEditorData(editor, index);
}

/*----------------------------------------------------------------------------*/

void ComboBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                    const QModelIndex &index) const
{
  if (!editor->metaObject()->userProperty().isValid())
  {
    QVariant value = editor->property("currentIndex");
    if (value.isValid())
    {
      model->setData(index, value);
      return;
    }
  }
  QItemDelegate::setModelData(editor, model, index);
}
