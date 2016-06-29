

@protocol OS_dispatch_queue, FBFunnelSenderDelegate;
@class NSObject, NSMutableDictionary;

@interface FBFunnelLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _funnels;
	NSMutableDictionary* _funnelGeneratedInstances;
	id<FBFunnelSenderDelegate> _funnelSenderDelegate;

}
+(id)sharedFunnelLogger;
-(void)handleApplicationDidEnterBackground:(id)arg1 ;
-(void)startFunnel:(id)arg1 instanceID:(unsigned)arg2 config:(id)arg3 ;
-(void)_startFunnel:(id)arg1 instanceID:(unsigned)arg2 config:(id)arg3 bypassSampling:(char)arg4 ;
-(void)_endFunnel:(id)arg1 instanceID:(unsigned)arg2 reason:(unsigned)arg3 ;
-(id)_createNewInstanceForFunnel:(id)arg1 prefixedInstanceID:(id)arg2 ;
-(void)addTagToFunnel:(id)arg1 instanceID:(unsigned)arg2 tag:(id)arg3 ;
-(void)_addTagToFunnel:(id)arg1 instanceID:(unsigned)arg2 tag:(id)arg3 ;
-(void)addActionToFunnel:(id)arg1 instanceID:(unsigned)arg2 actionName:(id)arg3 tag:(id)arg4 ;
-(void)_addActionToFunnel:(id)arg1 instanceID:(unsigned)arg2 actionName:(id)arg3 tag:(id)arg4 actionPayload:(id)arg5 ;
-(void)addActionToFunnel:(id)arg1 instanceID:(unsigned)arg2 actionName:(id)arg3 tag:(id)arg4 actionPayload:(id)arg5 ;
-(void)_sendAnalyticsEventForFunnel:(id)arg1 instanceID:(unsigned)arg2 ;
-(void)cancelFunnel:(id)arg1 instanceID:(unsigned)arg2 ;
-(void)_cancelFunnel:(id)arg1 instanceID:(unsigned)arg2 ;
-(void)_endPseudoFunnel:(id)arg1 instanceID:(unsigned)arg2 ;
-(id)initWithFunnelSenderDelegate:(id)arg1 ;
-(void)startFunnel:(id)arg1 ;
-(void)startFunnel:(id)arg1 config:(id)arg2 ;
-(void)startFunnel_DEV_MODE:(id)arg1 instanceID:(unsigned)arg2 config:(id)arg3 ;
-(void)addTagToFunnel:(id)arg1 tag:(id)arg2 ;
-(void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 ;
-(void)addActionToFunnel:(id)arg1 actionName:(id)arg2 tag:(id)arg3 actionPayload:(id)arg4 ;
-(void)endFunnel:(id)arg1 ;
-(void)endFunnel:(id)arg1 instanceID:(unsigned)arg2 ;
-(void)cancelFunnel:(id)arg1 ;
-(void)dealloc;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
@end

