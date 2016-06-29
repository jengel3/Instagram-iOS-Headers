

@protocol IGListWorkingRangeDelegate <NSObject>
@required
-(void)listAdapter:(id)arg1 listItemControllerWillEnterWorkingRange:(id)arg2;
-(void)listAdapter:(id)arg1 listItemControllerDidExitWorkingRange:(id)arg2;

@end

