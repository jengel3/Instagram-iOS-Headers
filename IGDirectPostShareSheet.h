
#import <Instagram/IGDirectShareSheet.h>

@class IGPost, NSString, IGDirectShareSheetExternalShareViewController;

@interface IGDirectPostShareSheet : IGDirectShareSheet {

	IGPost* _post;
	NSString* _warningMessage;
	IGDirectShareSheetExternalShareViewController* _shareController;

}

@property (nonatomic,retain) IGPost * post;                                                                //@synthesize post=_post - In the implementation block
@property (nonatomic,copy) NSString * warningMessage;                                                      //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,retain) IGDirectShareSheetExternalShareViewController * shareController;              //@synthesize shareController=_shareController - In the implementation block
-(IGPost *)post;
-(void)setPost:(IGPost *)arg1 ;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setWarningMessage:(NSString *)arg1 ;
-(IGDirectShareSheetExternalShareViewController *)shareController;
-(void)setShareController:(IGDirectShareSheetExternalShareViewController *)arg1 ;
-(NSString *)warningMessage;
-(float)externalShareControllerHeight;
-(id)externalShareController;
-(id)sendToTitleString;
-(id)init;
@end

