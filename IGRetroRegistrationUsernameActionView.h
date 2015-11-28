
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIButton, UIView;

@interface IGRetroRegistrationUsernameActionView : UIView {

	UIButton* _validationButton;
	UIButton* _refreshButton;
	UIView* _lineSeparatorView;

}

@property (nonatomic,retain) UIButton * validationButton;              //@synthesize validationButton=_validationButton - In the implementation block
@property (nonatomic,retain) UIButton * refreshButton;                 //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIView * lineSeparatorView;               //@synthesize lineSeparatorView=_lineSeparatorView - In the implementation block
-(void)setUsernameFieldIsValid:(char)arg1 ;
-(void)setFreshButtonIsValid:(char)arg1 ;
-(void)resetUsernameField;
-(UIView *)lineSeparatorView;
-(UIButton *)validationButton;
-(void)setValidationButton:(UIButton *)arg1 ;
-(void)setLineSeparatorView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRefreshButton:(UIButton *)arg1 ;
-(UIButton *)refreshButton;
@end

