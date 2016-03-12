

@protocol IGRealtimeSubscriptionDelegate <NSObject>
@optional
-(void)subscription:(id)arg1 statusDidChange:(unsigned)arg2;

@required
-(void)subscription:(id)arg1 didReceivePatchEvent:(id)arg2;
-(void)subscriptionRequiresRefresh:(id)arg1;

@end

