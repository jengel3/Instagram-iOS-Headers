
#import <Instagram/IGDirectShareViewController.h>

@class IGPost, NSString;

@interface IGDirectPostShareViewController : IGDirectShareViewController {

	IGPost* _post;
	NSString* _warningMessage;

}

@property (nonatomic,retain) IGPost * post;                        //@synthesize post=_post - In the implementation block
@property (nonatomic,copy) NSString * warningMessage;              //@synthesize warningMessage=_warningMessage - In the implementation block
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(NSString *)warningMessage;
@end

