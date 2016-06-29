

@protocol IGRealtimeOperationDelegate <NSObject>
@required
-(void)handleRealtimeOperation:(id)arg1;
-(id)pkForRealtimeOperation:(id)arg1;
-(void)handleRealtimeRefreshRequest;

@end

