

@protocol IGDirectContentCellDecorator <NSObject>
@required
-(void)removeSubviewsFromCell;
-(void)addSubviewsToCell;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithCell:(id)arg1;
-(void)setContent:(id)arg1;

@end

