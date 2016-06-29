

@protocol IGExploreCarouselsDelegate <NSObject>
@required
-(void)carouselsView:(id)arg1 didTapButtonInCarouselSection:(unsigned)arg2;
-(void)carouselsView:(id)arg1 didDisplayCarouselItemAtIndexPath:(id)arg2;
-(void)carouselsView:(id)arg1 didSelectCarouselItemAtIndexPath:(id)arg2;

@end

