

@protocol IGExploreCarouselsDataSource <NSObject>
@required
-(unsigned)numberOfCarouselsInCarouselsView:(id)arg1;
-(id)carouselsView:(id)arg1 titleForCarouselAtSection:(unsigned)arg2;
-(char)carouselsView:(id)arg1 shouldShowButtonForCarouselAtSection:(unsigned)arg2;
-(id)carouselsView:(id)arg1 actionTitleForCarouselAtSection:(unsigned)arg2;
-(unsigned)carouselsView:(id)arg1 numberOfItemsForCarouselAtSection:(unsigned)arg2;
-(id)carouselsView:(id)arg1 viewModelForCarouselItemAtIndexPath:(id)arg2;

@end

