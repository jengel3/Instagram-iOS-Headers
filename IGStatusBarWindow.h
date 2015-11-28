
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIWindow.h>

@protocol IGStatusBarWindowDelegate;
@class NSObject, UILabel, IGBlankRootViewController;

@interface IGStatusBarWindow : UIWindow {

	NSObject*<IGStatusBarWindowDelegate> _tapDelegate;
	UILabel* _textLabel;
	IGBlankRootViewController* _blankRootViewController;

}

@property (assign,nonatomic,__weak) NSObject*<IGStatusBarWindowDelegate> tapDelegate;              //@synthesize tapDelegate=_tapDelegate - In the implementation block
@property (nonatomic,retain) UILabel * textLabel;                                                  //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) IGBlankRootViewController * blankRootViewController;                  //@synthesize blankRootViewController=_blankRootViewController - In the implementation block
-(IGBlankRootViewController *)blankRootViewController;
-(void)setBlankRootViewController:(IGBlankRootViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTapDelegate:(NSObject*<IGStatusBarWindowDelegate>)arg1 ;
-(NSObject*<IGStatusBarWindowDelegate>)tapDelegate;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

