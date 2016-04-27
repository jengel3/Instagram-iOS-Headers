

@protocol IGRealtimeSubscriptionDelegate <NSObject>
@optional
-(void)subscription:(id)arg1 statusDidChange:(unsigned)arg2;

@required
-(void)subscriptionRequiresRefresh:(id)arg1;
-(void)subscription:(id)arg1 didReceivePatchEvent:(id)arg2;

@end

