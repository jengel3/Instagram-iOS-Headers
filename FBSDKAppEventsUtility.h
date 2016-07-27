

@interface FBSDKAppEventsUtility : NSObject
+(void)ensureOnMainThread;
+(id)activityParametersDictionaryForEvent:(id)arg1 implicitEventsOnly:(char)arg2 shouldAccessAdvertisingID:(char)arg3 ;
+(char)validateIdentifier:(id)arg1 ;
+(void)logAndNotify:(id)arg1 ;
+(long)unixTimeNow;
+(id)tokenStringToUseFor:(id)arg1 ;
+(id)flushReasonToString:(unsigned)arg1 ;
+(void)logAndNotify:(id)arg1 allowLogAsDeveloperError:(char)arg2 ;
+(unsigned)advertisingTrackingStatus;
+(id)advertiserID;
+(id)attributionID;
+(id)persistenceFilePath:(id)arg1 ;
+(id)anonymousID;
+(id)retrievePersistedAnonymousID;
+(void)persistAnonymousID:(id)arg1 ;
+(char)matchString:(id)arg1 firstCharacterSet:(id)arg2 restOfStringCharacterSet:(id)arg3 ;
+(char)regexValidateIdentifier:(id)arg1 ;
+(void)clearLibraryFiles;
-(id)init;
@end

