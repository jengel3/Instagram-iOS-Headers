
#import <Instagram/IGDirectShareSheet.h>

@class NSString, IGExternalShareViewController;

@interface IGDirectPostShareSheet : IGDirectShareSheet {

	NSString* _warningMessage;
	IGExternalShareViewController* _shareController;

}

@property (nonatomic,copy) NSString * warningMessage;                                      //@synthesize warningMessage=_warningMessage - In the implementation block
@property (nonatomic,retain) IGExternalShareViewController * shareController;              //@synthesize shareController=_shareController - In the implementation block
-(void)setWarningMessage:(NSString *)arg1 ;
-(IGExternalShareViewController *)shareController;
-(void)setShareController:(IGExternalShareViewController *)arg1 ;
-(NSString *)warningMessage;
-(float)externalShareControllerHeight;
-(id)externalShareController;
-(id)sendToTitleString;
-(void)uploadCurrentContentToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)module;
-(id)initWithModel:(id)arg1 ;
@end

