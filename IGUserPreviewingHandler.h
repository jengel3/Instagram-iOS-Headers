
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>

@class IGUser, NSString;

@interface IGUserPreviewingHandler : NSObject <UIViewControllerPreviewingDelegate> {

	id _controller;
	IGUser* _user;

}

@property (nonatomic,__weak,readonly) id controller;                //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) IGUser * user;                         //@synthesize user=_user - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGUser *)user;
-(void)setUser:(IGUser *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(id)controller;
@end

