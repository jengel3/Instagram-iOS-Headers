
#import <Instagram/IGUserSessionClearableObject.h>
#import <Instagram/IGRealtimeServerPayloadHandler.h>

@protocol IGDirectAckPayloadParsing, IGRealtimeMessageSending;
@class NSMutableDictionary, NSString;

@interface IGDirectRealtimeMessageDispatcher : NSObject <IGUserSessionClearableObject, IGRealtimeServerPayloadHandler> {

	int _operationMappingLock;
	NSMutableDictionary* _messageKeyToOperationMapping;
	id<IGDirectAckPayloadParsing> _ackPayloadParser;
	id<IGRealtimeMessageSending> _realtimeClient;

}

@property (nonatomic,readonly) NSMutableDictionary * messageKeyToOperationMapping;              //@synthesize messageKeyToOperationMapping=_messageKeyToOperationMapping - In the implementation block
@property (nonatomic,readonly) id<IGDirectAckPayloadParsing> ackPayloadParser;                  //@synthesize ackPayloadParser=_ackPayloadParser - In the implementation block
@property (nonatomic,__weak,readonly) id<IGRealtimeMessageSending> realtimeClient;              //@synthesize realtimeClient=_realtimeClient - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)currentDispatcher;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithRealtimeClient:(id)arg1 ackPayloadParser:(id)arg2 ;
-(void)registerAsRealtimeServerPayloadHandler;
-(void)realtimeStatusDidChange:(id)arg1 ;
-(NSMutableDictionary *)messageKeyToOperationMapping;
-(id<IGRealtimeMessageSending>)realtimeClient;
-(id<IGDirectAckPayloadParsing>)ackPayloadParser;
-(void)handleBroadcastResponse:(id)arg1 ;
-(void)handlePayload:(id)arg1 ;
-(char)needsMoreTimeProcessingPayload;
-(id)initWithRealtimeClient:(id)arg1 ;
-(void)sendMessage:(id)arg1 messageKey:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)description;
-(void)cleanUp;
@end

