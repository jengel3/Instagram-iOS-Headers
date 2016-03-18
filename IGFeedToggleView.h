
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@protocol IGFeedToggleViewDelegate;
@class UIImageView, UILabel, UIButton, NSMutableArray;

@interface IGFeedToggleView : UIView {

	UIImageView* _usertagsCountBubble;
	UILabel* _usertagsCountLabel;
	UIButton* _usertagsButton;
	char _isProfileMode;
	id<IGFeedToggleViewDelegate> _delegate;
	NSMutableArray* _buttons;
	int _userTagCount;

}

@property (assign,nonatomic,__weak) id<IGFeedToggleViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttons;                                  //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) int userTagCount;                                          //@synthesize userTagCount=_userTagCount - In the implementation block
+(int)height;
-(void)switchedMode:(id)arg1 ;
-(id)initWithMapAndUsertagButtons;
-(void)updateUsertagCount;
-(void)updateUsertagLayout;
-(void)selectButton:(int)arg1 ;
-(void)setButtonEnabled:(char)arg1 forButton:(int)arg2 ;
-(id)initForCurrentUserProfile;
-(int)userTagCount;
-(void)setUserTagCount:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<IGFeedToggleViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<IGFeedToggleViewDelegate>)delegate;
-(NSMutableArray *)buttons;
-(void)setButtons:(NSMutableArray *)arg1 ;
@end

