
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGUserDetailViewController, NSString;

@interface IGUserDetailPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	IGUserDetailViewController* _controller;

}

@property (nonatomic,__weak,readonly) IGUserDetailViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserDetailViewController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(IGUserDetailViewController *)controller;
@end

