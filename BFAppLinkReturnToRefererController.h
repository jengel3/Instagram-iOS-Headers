
#import <Instagram/BFAppLinkReturnToRefererViewDelegate.h>

@protocol BFAppLinkReturnToRefererControllerDelegate;
@class UINavigationController, BFAppLinkReturnToRefererView, NSString;

@interface BFAppLinkReturnToRefererController : NSObject <BFAppLinkReturnToRefererViewDelegate> {

	UINavigationController* _navigationController;
	BFAppLinkReturnToRefererView* _view;
	id<BFAppLinkReturnToRefererControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BFAppLinkReturnToRefererControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) BFAppLinkReturnToRefererView * view; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForDisplayAboveNavController:(id)arg1 ;
-(void)statusBarFrameDidChange:(id)arg1 ;
-(void)moveNavigationBar;
-(void)showViewForRefererAppLink:(id)arg1 ;
-(void)closeViewAnimated:(char)arg1 explicitlyClosed:(char)arg2 ;
-(void)openRefererAppLink:(id)arg1 ;
-(void)updateNavigationBarY:(float)arg1 ;
-(void)returnToRefererViewDidTapInsideCloseButton:(id)arg1 ;
-(void)returnToRefererViewDidTapInsideLink:(id)arg1 link:(id)arg2 ;
-(void)showViewForRefererURL:(id)arg1 ;
-(void)removeFromNavController;
-(void)closeViewAnimated:(char)arg1 ;
-(void)setDelegate:(id<BFAppLinkReturnToRefererControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<BFAppLinkReturnToRefererControllerDelegate>)delegate;
-(BFAppLinkReturnToRefererView *)view;
-(void)setView:(BFAppLinkReturnToRefererView *)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)orientationDidChange:(id)arg1 ;
@end

