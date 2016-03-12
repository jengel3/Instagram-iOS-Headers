
#import <Instagram/IGUserSessionClearableObject.h>

@class NSDictionary, NSString, IGNonCurrentUserDefaults;

@interface IGServiceManager : NSObject <IGUserSessionClearableObject> {

	NSDictionary* _serviceMap;
	NSString* _userSessionPK;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) NSDictionary * serviceMap;                                   //@synthesize serviceMap=_serviceMap - In the implementation block
@property (nonatomic,retain) NSString * userSessionPK;                                    //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)allServiceTypes;
+(id)shareServicesForServiceTypes:(id)arg1 ;
+(id)imageForServiceType:(int)arg1 enabled:(char)arg2 ;
+(id)serviceTypeToServiceHelperClassDictionary;
+(id)sharedServiceManager;
-(id)shortNameForService:(int)arg1 ;
-(char)serviceIsConfigured:(int)arg1 ;
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)initWithUserSessionPK:(id)arg1 sessionUserDefaults:(id)arg2 ;
-(id)nameForService:(int)arg1 ;
-(void)setServiceMap:(NSDictionary *)arg1 ;
-(char)serviceIsConfigurable:(int)arg1 ;
-(id)serviceHelperForService:(int)arg1 ;
-(void)logoutService:(int)arg1 ;
-(void)logoutService:(int)arg1 unlink:(char)arg2 ;
-(void)logoutAllServices;
-(char)serviceIsAdequatelyConfiguredForSharing:(int)arg1 ;
-(char)serviceHasAdvancedOptions:(int)arg1 ;
-(id)customTextForCellDetail:(int)arg1 ;
-(char)canToggle:(int)arg1 ;
-(id)activeServicesFromServiceArray:(id)arg1 ;
-(id)serviceTypesForCurrentLocaleMediaType:(int)arg1 locationAvailable:(char)arg2 abbreviatedList:(char)arg3 ;
-(id)sharingInfoForService:(int)arg1 ;
-(NSDictionary *)serviceMap;
@end

