

@class IGDirectThread;

@interface IGDirectThreadCopier : NSObject {

	IGDirectThread* _thread;

}

@property (nonatomic,readonly) IGDirectThread * thread;              //@synthesize thread=_thread - In the implementation block
+(id)withThread:(id)arg1 ;
-(id)byAddingMessages:(id)arg1 ;
-(id)byRemovingPendingMessages:(id)arg1 ;
-(id)byReplacingReactableContent:(id)arg1 didChangeReactions:(char*)arg2 ;
-(id)byRemovingPublishedMessageWithItemId:(id)arg1 ;
-(id)bySettingLastSeenAtForUserWithId:(id)arg1 timestamp:(id)arg2 seenItemId:(id)arg3 ;
-(id)byTrimmingMessagesToCount:(unsigned)arg1 ;
-(id)byForcingLastSeenDate:(id)arg1 forCurrentUserPK:(id)arg2 ;
-(id)initWithThread:(id)arg1 ;
-(IGDirectThread *)thread;
@end

