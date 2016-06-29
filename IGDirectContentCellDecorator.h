

@protocol IGDirectContentCellDecorator <NSObject>
@required
-(void)detachGestureRecognizers;
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(void)attachGestureRecognizers;
-(void)finishLayout;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithCell:(id)arg1;
-(void)setContent:(id)arg1;

@end

