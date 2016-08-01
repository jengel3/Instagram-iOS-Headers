

@class NSString;

@interface FBSDKTimeSpentData : NSObject {

	char _isCurrentlyLoaded;
	char _shouldLogActivateEvent;
	char _shouldLogDeactivateEvent;
	long _secondsSpentInCurrentSession;
	long _timeSinceLastSuspend;
	int _numInterruptionsInCurrentSession;
	long _lastRestoreTime;
	long _lastSuspendTime;
	NSString* _sessionID;

}
+(void)setSourceApplication:(id)arg1 openURL:(id)arg2 ;
+(void)registerAutoResetSourceApplication;
+(id)getSourceApplication;
+(void)resetSourceApplication;
+(void)setSourceApplication:(id)arg1 isFromAppLink:(char)arg2 ;
+(void)restore:(char)arg1 ;
+(void)suspend;
+(id)singleton;
-(void)instanceSuspend;
-(void)instanceRestore:(char)arg1 ;
-(id)appEventsParametersForDeactivate;
-(id)appEventsParametersForActivate;
@end

