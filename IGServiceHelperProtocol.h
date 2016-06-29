

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
-(id)sharingInfo;
-(void)logoutAndUnlink;
-(id)initWithSessionUserDefaults:(id)arg1;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1;
-(void)reauthorizeIfNeeded;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(void)logout;
-(char)isConfigured;

@end

