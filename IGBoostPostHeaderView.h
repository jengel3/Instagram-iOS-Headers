
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface IGBoostPostHeaderView : UIView {

	NSString* _screenID;
	UIButton* _leftButton;
	UILabel* _titleLabel;
	UIButton* _rightButton;
	/*^block*/id _leftButtonCompletion;
	/*^block*/id _rightButtonCompletion;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * screenID;                   //@synthesize screenID=_screenID - In the implementation block
@property (nonatomic,readonly) UIButton * leftButton;               //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * rightButton;              //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,copy) id leftButtonCompletion;                 //@synthesize leftButtonCompletion=_leftButtonCompletion - In the implementation block
@property (nonatomic,copy) id rightButtonCompletion;                //@synthesize rightButtonCompletion=_rightButtonCompletion - In the implementation block
-(void)setUpViewHierarchy;
-(void)onLeftButtonTapped:(id)arg1 ;
-(void)onRightButtonTapped:(id)arg1 ;
-(id)leftButtonCompletion;
-(id)rightButtonCompletion;
-(void)setLeftButtonCompletion:(id)arg1 ;
-(void)setRightButtonCompletion:(id)arg1 ;
-(void)setUpLeftButtonWithImage:(id)arg1 onTapAction:(/*^block*/id)arg2 ;
-(void)setUpRightButtonWithString:(id)arg1 onTapAction:(/*^block*/id)arg2 ;
-(void)setIsRightButtonActive:(char)arg1 ;
-(void)setIsRightButtonHidden:(char)arg1 ;
-(void)setScreenID:(NSString *)arg1 ;
-(NSString *)screenID;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(UIButton *)leftButton;
-(UIButton *)rightButton;
@end

