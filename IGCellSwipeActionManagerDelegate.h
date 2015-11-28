

@protocol IGCellSwipeActionManagerDelegate <NSObject>
@optional
-(char)cellSwipeActionManagerShouldShowActions:(id)arg1;
-(void)cellSwipeActionManagerDidShowActions:(id)arg1;
-(void)cellSwipeActionManagerDidHideActions:(id)arg1;
-(void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)arg1;
-(void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
-(void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;

@end

