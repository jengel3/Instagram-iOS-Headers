

@protocol IGCellSwipeActionManagerSwipingDelegate <NSObject>
@required
-(char)cellSwipeActionManagerShouldAllowSwipeToAction:(id)arg1;
-(void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
-(void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;

@end

