

@protocol IGExploreCellDelegate <NSObject>
@optional
-(void)exploreCellDidTapFollow:(id)arg1;
-(void)exploreCellDidTapDismiss:(id)arg1;
-(void)exploreCellDidTapFollowing:(id)arg1;
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2;

@required
-(void)updateCellVisibility:(id)arg1 imageView:(id)arg2 mediaIndex:(unsigned)arg3;

@end

