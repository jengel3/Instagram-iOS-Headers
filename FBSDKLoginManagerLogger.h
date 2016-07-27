

@class NSString, NSMutableDictionary, NSError;

@interface FBSDKLoginManagerLogger : NSObject {

	NSString* _identifier;
	NSMutableDictionary* _extras;
	NSString* _lastResult;
	NSError* _lastError;
	NSString* _authMethod;

}
+(id)loggerFromParameters:(id)arg1 ;
-(void)endLoginWithResult:(id)arg1 error:(id)arg2 ;
-(void)startSessionForLoginManager:(id)arg1 ;
-(void)startAuthMethod:(id)arg1 ;
-(void)willAttemptAppSwitchingBehavior;
-(id)parametersWithTimeStampAndClientState:(id)arg1 forAuthMethod:(id)arg2 ;
-(void)systemAuthDidShowDialog:(char)arg1 isUnTOSedDevice:(char)arg2 ;
-(id)_parametersForNewEvent;
-(void)logEvent:(id)arg1 params:(id)arg2 ;
-(void)logEvent:(id)arg1 result:(id)arg2 error:(id)arg3 ;
-(id)clientStateForAuthMethod:(id)arg1 andExistingState:(id)arg2 ;
-(id)init;
-(void)endSession;
@end

