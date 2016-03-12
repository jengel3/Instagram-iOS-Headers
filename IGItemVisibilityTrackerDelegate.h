

@protocol IGItemVisibilityTrackerDelegate <NSObject>
@required
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2;

@end

