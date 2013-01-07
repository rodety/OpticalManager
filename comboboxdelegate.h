#ifndef COMBOBOXDELEGATE_H
#define COMBOBOXDELEGATE_H

#include <QItemDelegate>

class ComboBoxDelegate : public QItemDelegate
{
      Q_OBJECT
   public:
      ComboBoxDelegate(QObject *parent = 0);
      void setEditorData(QWidget *editor, const QModelIndex &index) const;
      void setModelData(QWidget *editor, QAbstractItemModel *model,
         const QModelIndex &index) const;
};
#endif /* COMBOBOXDELEGATE_H */
