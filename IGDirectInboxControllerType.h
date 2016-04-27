

@protocol IGDirectInboxControllerType <IGDirectThreadViewControllerDelegate,IGUIPerfLoggable>
@required
-(void)refreshDataWithClearCount:(char)arg1;
-(unsigned)inboxSubscriptionStatus;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3;
-(void)scrollToTopAnimated:(char)arg1;

@end

