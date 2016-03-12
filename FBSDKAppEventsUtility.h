

@interface FBSDKAppEventsUtility : NSObject
+(long)unixTimeNow;
+(id)attributionID;
+(id)advertiserID;
+(id)anonymousID;
+(unsigned)advertisingTrackingStatus;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(id)persistenceFilePath:(id)arg1 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(char)arg2 ;
+(char)regexValidateIdentifier:(id)arg1 ;
+(void)logAndNotify:(id)arg1 ;
+(void)ensureOnMainThread;
+(id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(char)arg2 shouldAccessAdvertisingID:(char)arg3 ;
+(void)clearLibraryFiles;
+(id)flushReasonToString:(unsigned)arg1 ;
+(char)validateIdentifier:(id)arg1 ;
+(id)tokenStringToUseFor:(id)arg1 ;
-(id)init;
@end

