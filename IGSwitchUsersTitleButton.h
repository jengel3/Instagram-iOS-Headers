
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UILabel;

@interface IGSwitchUsersTitleButton : UIButton {

	UIView* _caretView;
	UILabel* _usernameLabel;

}

@property (nonatomic,retain) UIView * caretView;                   //@synthesize caretView=_caretView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;              //@synthesize usernameLabel=_usernameLabel - In the implementation block
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 ;
-(UIView *)caretView;
-(void)setCaretView:(UIView *)arg1 ;
@end

