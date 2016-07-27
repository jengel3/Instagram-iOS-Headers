

@protocol IGDirectPendingInboxThreadItemControllerDelegate <NSObject>
@required
-(void)inboxThreadItemController:(id)arg1 didAllowThreadWithId:(id)arg2;
-(void)inboxThreadItemController:(id)arg1 didDeclineThreadWithId:(id)arg2;

@end

