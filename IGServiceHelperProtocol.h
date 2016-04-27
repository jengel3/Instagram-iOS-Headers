

@protocol IGServiceHelperProtocol <NSObject>
@optional
-(char)hasEverBeenConfigured;
-(void)clearActiveSession;
-(id)currentUsername;
-(char)canToggle;
-(id)currentDetailText;
-(char)mayExcludeFromAbbreviatedList;

@required
+(void)clearForUserPK:(id)arg1;
+(id)shortServiceName;
+(id)serviceName;
-(id)sharingInfo;
-(char)needsToReauthorize;
-(id)initWithSessionUserDefaults:(id)arg1;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(void)logout;
-(char)isConfigured;

@end

