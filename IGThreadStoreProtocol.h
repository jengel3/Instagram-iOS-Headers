

@protocol IGThreadStoreProtocol <NSObject>
@required
-(id)storedThreadWithID:(id)arg1;
-(id)updateStoreWithThreadDictionary:(id)arg1 alwaysMerge:(char)arg2;
-(void)handleRealtimeAddContent:(id)arg1 threadID:(id)arg2;
-(void)postThreadUpdatedNotificationForThreadID:(id)arg1;

@end

