

@protocol IGRealtimeMessageSending <NSObject>
@required
-(void)unregisterServerPayloadHandler:(id)arg1;
-(void)registerServerPayloadHandler:(id)arg1 forEvents:(id)arg2 actions:(id)arg3;
-(void)sendMessage:(id)arg1;

@end

