

@class NSString;

@interface IGAnalyticsHelper : NSObject {

	NSString* familyIDInUserDefaultsBeforeAccess;
	NSString* familyIDAfterAccess;
	NSString* _cachedFamilyDeviceID;

}

@property (nonatomic,copy) NSString * cachedFamilyDeviceID;              //@synthesize cachedFamilyDeviceID=_cachedFamilyDeviceID - In the implementation block
+(char)shouldUseFamilyDeviceID;
+(id)sharedHelper;
+(id)uniqueID;
-(NSString *)cachedFamilyDeviceID;
-(void)setCachedFamilyDeviceID:(NSString *)arg1 ;
-(void)logAnalyticsFamilyIDUpdate:(id)arg1 newFamilyDeviceID:(id)arg2 ;
-(id)familyDeviceID;
-(void)readAndStoreQEFlagToUseFamilyDeviceId;
-(void)logFamilyDeviceIDAccess;
@end

