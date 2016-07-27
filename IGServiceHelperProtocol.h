

@protocol IGServiceHelperProtocol <NSObject>
@optional
-(id)currentDetailText;
-(char)canToggle;
-(char)mayExcludeFromAbbreviatedList;
-(char)hasEverBeenConfigured;
-(id)currentUsername;

@required
+(void)clearForUserPK:(id)arg1;
+(id)shortServiceName;
+(id)serviceName;
-(void)reauthorizeIfNeeded;
-(void)logoutAndUnlink;
-(id)initWithSessionUserDefaults:(id)arg1;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1;
-(char)requiresLocationCoordinate;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(id)sharingInfo;
-(void)logout;
-(char)isConfigured;

@end

