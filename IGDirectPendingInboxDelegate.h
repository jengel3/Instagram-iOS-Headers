

@protocol IGDirectPendingInboxDelegate <NSObject>
@required
-(void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(char)arg3 remainingInviter:(id)arg4;
-(void)pendingInboxDidClear:(id)arg1;

@end

