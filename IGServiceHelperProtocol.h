

@protocol IGServiceHelperProtocol <NSObject>
@optional
-(id)currentUsername;
-(id)currentDetailText;
-(char)canToggle;
-(char)mayExcludeFromAbbreviatedList;
-(char)hasEverBeenConfigured;
-(void)clearActiveSessionForUserPK:(id)arg1;
-(void)restoreSessionForPk:(id)arg1;

@required
+(void)clearForUserPK:(id)arg1;
+(id)shortServiceName;
+(id)serviceName;
-(id)sharingInfo;
-(id)initWithSessionUserDefaults:(id)arg1;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(void)logout;
-(char)isConfigured;

@end

