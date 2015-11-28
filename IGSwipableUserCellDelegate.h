

@protocol IGSwipableUserCellDelegate <NSObject>
@optional
-(void)userDidFollow:(id)arg1;

@required
-(void)userDidTapCell:(id)arg1;
-(void)userDidDismissCell:(id)arg1;

@end

