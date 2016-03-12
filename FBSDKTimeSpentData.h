

@interface FBSDKTimeSpentData : NSObject {

	char _isCurrentlyLoaded;
	char _shouldLogActivateEvent;
	char _shouldLogDeactivateEvent;
	long _secondsSpentInCurrentSession;
	long _timeSinceLastSuspend;
	int _numInterruptionsInCurrentSession;
	long _lastRestoreTime;
	int _numSecondsIdleToBeNewSession;

}

@property (assign,nonatomic) int numSecondsIdleToBeNewSession;              //@synthesize numSecondsIdleToBeNewSession=_numSecondsIdleToBeNewSession - In the implementation block
+(id)getSourceApplication;
+(void)resetSourceApplication;
+(void)setSourceApplication:(id)arg1 openURL:(id)arg2 ;
+(void)registerAutoResetSourceApplication;
+(void)setSourceApplication:(id)arg1 isFromAppLink:(char)arg2 ;
+(void)restore:(char)arg1 ;
+(void)suspend;
+(id)singleton;
-(void)instanceSuspend;
-(void)instanceRestore:(char)arg1 ;
-(int)numSecondsIdleToBeNewSession;
-(void)setNumSecondsIdleToBeNewSession:(int)arg1 ;
-(id)init;
@end

