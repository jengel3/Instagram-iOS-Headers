
#import <UIKit/UIView.h>

@protocol IGFeedToggleViewDelegate;
@class UIImageView, UILabel, UIButton, NSMutableArray;

@interface IGFeedToggleView : UIView {

	/*^block*/id _titleSetter;
	UIImageView* _usertagsCountBubble;
	UILabel* _usertagsCountLabel;
	UIButton* _usertagsButton;
	char _isProfileMode;
	id<IGFeedToggleViewDelegate> _delegate;
	NSMutableArray* _buttons;

}

@property (assign,nonatomic,__weak) id<IGFeedToggleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
+(id)feedToggleViewForUserHeader;
+(id)feedToggleViewForProfileHeader;
+(id)feedToggleViewWithAccessoryLabel;
+(id)feedToggleViewWithAccessoryButton;
+(int)height;
-(void)switchedMode:(id)arg1 ;
-(id)initWithMapAndUsertagButtons;
-(void)updateUsertagCount;
-(id)initForProfile;
-(id)initWithAccessoryLabel;
-(id)initWithAccessoryButton;
-(void)selectButton:(int)arg1 ;
-(void)setButtonEnabled:(char)arg1 forButton:(int)arg2 ;
-(void)setAccessoryTitle:(id)arg1 ;
-(void)setDelegate:(id<IGFeedToggleViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<IGFeedToggleViewDelegate>)delegate;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
@end

