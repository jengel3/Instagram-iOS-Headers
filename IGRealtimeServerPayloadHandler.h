

@protocol IGRealtimeServerPayloadHandler <NSObject>
@required
-(void)handlePayload:(id)arg1;
-(char)needsMoreTimeProcessingPayload;

@end

