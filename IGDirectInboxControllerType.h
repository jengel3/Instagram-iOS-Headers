

@protocol IGDirectInboxControllerType <IGDirectThreadViewControllerDelegate,IGUIPerfLoggable>
@required
-(void)refreshDataWithClearCount:(char)arg1;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3;
-(unsigned)inboxSubscriptionStatus;
-(void)scrollToTopAnimated:(char)arg1;

@end

