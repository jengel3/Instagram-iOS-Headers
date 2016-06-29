

@protocol IGDirectInboxControllerType <IGUIPerfLoggable>
@required
-(void)pushToPendingInboxAnimated:(char)arg1;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3;
-(void)reloadInbox;
-(void)scrollToTopAnimated:(char)arg1;

@end

