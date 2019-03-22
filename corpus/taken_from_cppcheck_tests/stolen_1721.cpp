void TDataModel::forceRowRefresh(int row) {
    emit dataChanged(index(row, 0), index(row, columnCount() - 1));
}