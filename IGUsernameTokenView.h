
#import <Instagram/IGTokenView.h>

@class UILabel, UIView;

@interface IGUsernameTokenView : IGTokenView {

	UILabel* _usernameLabel;
	UIView* _backgroundView;

}

@property (nonatomic,retain) UILabel * usernameLabel;              //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;              //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UILabel *)usernameLabel;
-(id)initWithToken:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIView *)backgroundView;
@end

