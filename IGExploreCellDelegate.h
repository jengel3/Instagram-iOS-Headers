

@protocol IGExploreCellDelegate <NSObject>
@optional
-(void)exploreCell:(id)arg1 didTapMediaAtIndex:(unsigned)arg2;
-(void)exploreCellDidTapFollow:(id)arg1;
-(void)exploreCellDidTapDismiss:(id)arg1;
-(void)exploreCellDidTapFollowing:(id)arg1;

@end

