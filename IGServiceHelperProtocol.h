

@protocol IGServiceHelperProtocol <NSObject>
@optional
-(char)hasEverBeenConfigured;
-(id)currentUsername;
-(char)canToggle;
-(id)currentDetailText;
-(char)mayExcludeFromAbbreviatedList;

@required
+(void)clearForUserPK:(id)arg1;
+(id)shortServiceName;
+(id)serviceName;
-(void)reauthorizeIfNeeded;
-(id)initWithSessionUserDefaults:(id)arg1;
-(void)logoutAndUnlink;
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

