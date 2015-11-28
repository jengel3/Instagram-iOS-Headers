

@interface FBSDKAppEventsStateManager : NSObject
+(id)retrievePersistedAppEventsStates;
+(void)clearPersistedAppEventsStates;
+(void)persistAppEventsData:(id)arg1 ;
+(id)filePath;
@end

