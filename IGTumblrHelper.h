
#import <Instagram/IGXAuthServiceHelper.h>

@class IGSwitch;

@interface IGTumblrHelper : IGXAuthServiceHelper {

	IGSwitch* _followSwitch;

}
+(id)sharedTumblrHelper;
+(id)serviceName;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(id)loginErrorMessage;
-(int)numberOfExtraRowsForLogin;
-(void)prepareCell:(id)arg1 forIndexPath:(id)arg2 ;
-(char)isConfigurable;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(id)shortServiceName;
-(id)viewControllerForAdvancedOptions;
-(void)onTumblrLoginCompleted:(id)arg1 ;
-(id)followSwitch;
-(void)followTicket:(id)arg1 didSucceedWithData:(id)arg2 ;
-(void)followTicket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)followInstagram;
-(int)usernameType;
-(void)dealloc;
-(id)URLString;
-(id)consumerKey;
-(id)consumerSecret;
@end

