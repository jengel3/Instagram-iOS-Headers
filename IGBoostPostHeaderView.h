
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UILabel, NSString;

@interface IGBoostPostHeaderView : UIView {

	UIButton* _leftButton;
	UILabel* _titleLabel;
	/*^block*/id _leftButtonCompletion;

}

@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) UIButton * leftButton;              //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;               //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,copy) id leftButtonCompletion;                //@synthesize leftButtonCompletion=_leftButtonCompletion - In the implementation block
-(void)setUpViewHierarchy;
-(void)onLeftButtonTapped:(id)arg1 ;
-(id)leftButtonCompletion;
-(void)setLeftButtonCompletion:(id)arg1 ;
-(void)setUpLeftButtonWithImage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UILabel *)titleLabel;
-(UIButton *)leftButton;
@end

