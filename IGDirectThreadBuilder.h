

@class NSThread, NSMutableDictionary, NSString;

@interface IGDirectThreadBuilder : NSObject {

	NSThread* _currentThread;
	NSMutableDictionary* _threadProperties;
	NSString* _threadIdFromLastBuild;

}

@property (nonatomic,readonly) NSThread * currentThread;                            //@synthesize currentThread=_currentThread - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * threadProperties;              //@synthesize threadProperties=_threadProperties - In the implementation block
@property (nonatomic,copy) NSString * threadIdFromLastBuild;                        //@synthesize threadIdFromLastBuild=_threadIdFromLastBuild - In the implementation block
+(id)withThread:(id)arg1 ;
-(id)withLastMediaURLProvider:(id)arg1 ;
-(id)withPendingMessages:(id)arg1 ;
-(NSMutableDictionary *)threadProperties;
-(NSString *)threadIdFromLastBuild;
-(char)validateThreadProperties;
-(void)setThreadIdFromLastBuild:(NSString *)arg1 ;
-(void)updateValue:(id)arg1 forSelector:(SEL)arg2 ;
-(id)withThreadId:(id)arg1 ;
-(id)withName:(id)arg1 ;
-(id)withUsers:(id)arg1 ;
-(id)withLeftUsers:(id)arg1 ;
-(id)withInviter:(id)arg1 ;
-(id)withPublishedMessages:(id)arg1 ;
-(id)withUnfinishedMessage:(id)arg1 ;
-(id)withLastActivityDate:(id)arg1 ;
-(id)withNewestCursor:(id)arg1 ;
-(id)withOldestCursor:(id)arg1 ;
-(id)withIsLocal:(char)arg1 ;
-(id)withIsPending:(char)arg1 ;
-(id)withIsMuted:(char)arg1 ;
-(id)withIsCanonical:(char)arg1 ;
-(id)withHasOlder:(char)arg1 ;
-(id)withLastSeenAtForUserIds:(id)arg1 ;
-(id)withLastSeenAtForItemIds:(id)arg1 ;
-(id)init;
-(NSThread *)currentThread;
-(id)initWithThread:(id)arg1 ;
-(id)thread;
@end

