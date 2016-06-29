
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>

@class UIViewController, NSString;

@interface IGFileLogUtility : NSObject <MFMailComposeViewControllerDelegate> {

	UIViewController* _vcForMailComposer;

}

@property (assign,nonatomic,__weak) UIViewController * vcForMailComposer;              //@synthesize vcForMailComposer=_vcForMailComposer - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedFileLogUtility;
-(void)presentMailComposerForVC:(id)arg1 context:(int)arg2 ;
-(UIViewController *)vcForMailComposer;
-(void)setVcForMailComposer:(UIViewController *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
@end

