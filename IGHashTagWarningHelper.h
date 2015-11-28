
#import <UIKit/UIWebViewDelegate.h>

@class NSMutableSet, IGHashtagModel, NSURL, UIAlertView, NSDictionary, NSString;

@interface IGHashTagWarningHelper : NSObject <UIWebViewDelegate> {

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
-(void)checkHashtagForWarning:(id)arg1 decisionBlock:(/*^block*/id)arg2 ;
-(NSDictionary *)hashtagWarningInfo;
-(id)warningForHashTag:(id)arg1 ;
-(void)userDidAcceptWarning:(char)arg1 ;
-(void)setHashtagWarningInfo:(NSDictionary *)arg1 ;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
@end

