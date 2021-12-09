#include "TileView.h"

void UTileView::SetEntryWidth(float NewWidth) {
}

void UTileView::SetEntryHeight(float NewHeight) {
}

UTileView::UTileView() {
    this->EntryHeight = 128.00f;
    this->EntryWidth = 128.00f;
    this->TileAlignment = EListItemAlignment::EvenlyDistributed;
    this->bWrapHorizontalNavigation = false;
}

