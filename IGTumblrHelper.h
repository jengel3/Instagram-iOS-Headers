
#import <Instagram/IGXAuthServiceHelper.h>

@class IGSwitch;

@interface IGTumblrHelper : IGXAuthServiceHelper {

	IGSwitch* _followSwitch;

}
+(id)shortServiceName;
+(id)sharedTumblrHelper;
+(id)serviceName;
-(char)hasEverBeenConfigured;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)isAvailableInCurrentLocale;
-(id)viewControllerForAdvancedOptions;
-(void)onTumblrLoginCompleted:(id)arg1 ;
-(id)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followInstagram;
-(int)usernameType;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)URLString;
-(id)consumerKey;
-(id)consumerSecret;
@end

