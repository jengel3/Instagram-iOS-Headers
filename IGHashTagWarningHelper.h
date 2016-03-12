
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableSet, IGHashtagModel, NSURL, UIAlertView, NSDictionary, NSString;

@interface IGHashTagWarningHelper : NSObject <UIAlertViewDelegate, UIWebViewDelegate> {

	NSMutableSet* _approvedHashtags;
	IGHashtagModel* _hashtag;
	/*^block*/id _decisionBlock;
	NSURL* _warningURL;
	UIAlertView* _alertView;
	NSDictionary* _hashtagWarningInfo;

}

@property (nonatomic,retain) NSDictionary * hashtagWarningInfo;              //@synthesize hashtagWarningInfo=_hashtagWarningInfo - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedHelper;
-(void)userDidAcceptWarning:(char)arg1 ;
-(void)showHashtagWarning:(id)arg1 forHashtag:(id)arg2 decisionBlock:(/*^block*/id)arg3 ;
-(NSDictionary *)hashtagWarningInfo;
-(void)setHashtagWarningInfo:(NSDictionary *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

