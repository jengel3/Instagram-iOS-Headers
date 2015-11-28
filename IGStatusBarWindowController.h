
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGStatusBarWindowDelegate.h>

@protocol IGStatusBarWindowControllerDelegate;
@class IGStatusBarWindow, NSObject, NSString;

@interface IGStatusBarWindowController : NSObject <IGStatusBarWindowDelegate> {

	IGStatusBarWindow* _statusBarWindow;
	NSObject*<IGStatusBarWindowControllerDelegate> _delegate;

}

@property (nonatomic,retain) IGStatusBarWindow * statusBarWindow;                                         //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)backToFacebookStatusBarVisible;
+(CGRect)statusBarViewFrameForStatusHidden:(char)arg1 ;
-(void)statusBarWindowDidReceiveUserTap:(id)arg1 ;
-(void)onAppDidEnterBackground:(id)arg1 ;
-(void)onWillPresentMediaFromFacebookApp:(id)arg1 ;
-(void)onTabChanged:(id)arg1 ;
-(void)onNavigationViewDidAppear:(id)arg1 ;
-(void)onCameraButtonTapped:(id)arg1 ;
-(void)showStatusBarView:(char)arg1 animated:(char)arg2 ;
-(void)setDelegate:(NSObject*<IGStatusBarWindowControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(NSObject*<IGStatusBarWindowControllerDelegate>)delegate;
-(IGStatusBarWindow *)statusBarWindow;
-(void)setStatusBarWindow:(IGStatusBarWindow *)arg1 ;
@end

