

@protocol IGDirectInboxThreadItemControllerDelegate <NSObject>
@required
-(void)inboxThreadItemController:(id)arg1 didSetThreadMuted:(char)arg2 threadId:(id)arg3;
-(void)inboxThreadItemController:(id)arg1 didSwipeOpenViewModel:(id)arg2;
-(void)inboxThreadItemController:(id)arg1 didDeleteThreadWithId:(id)arg2;

@end

