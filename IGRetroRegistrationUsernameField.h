
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGRetroRegistrationTextField.h>

@class UIButton, UIView;

@interface IGRetroRegistrationUsernameField : IGRetroRegistrationTextField {

	char _usernameIsRefreshable;
	UIButton* _validationButton;
	UIButton* _refreshButton;
	int _usernameState;
	UIView* _lineSeparatorView;
	UIView* _actionView;
	int _usernameFieldState;

}

@property (nonatomic,retain) UIButton * validationButton;              //@synthesize validationButton=_validationButton - In the implementation block
@property (nonatomic,retain) UIButton * refreshButton;                 //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,retain) UIView * lineSeparatorView;               //@synthesize lineSeparatorView=_lineSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * actionView;                      //@synthesize actionView=_actionView - In the implementation block
@property (assign,nonatomic) int usernameFieldState;                   //@synthesize usernameFieldState=_usernameFieldState - In the implementation block
@property (assign,nonatomic) char usernameIsRefreshable;               //@synthesize usernameIsRefreshable=_usernameIsRefreshable - In the implementation block
@property (assign,nonatomic) int usernameState;                        //@synthesize usernameState=_usernameState - In the implementation block
+(int)usernameFieldStateWithUsernameState:(int)arg1 usernameRefreshable:(char)arg2 ;
-(UIView *)lineSeparatorView;
-(id)createValidationButton;
-(id)createRefreshButton;
-(id)createLineSeparatorView;
-(void)updateActionView;
-(UIButton *)validationButton;
-(int)usernameFieldState;
-(char)usernameIsRefreshable;
-(void)setUsernameFieldState:(int)arg1 ;
-(void)updateValidationImage;
-(void)updateActionViewSubviews;
-(void)setValidationButton:(UIButton *)arg1 ;
-(void)setLineSeparatorView:(UIView *)arg1 ;
-(void)setUsernameIsRefreshable:(char)arg1 ;
-(void)setUsernameState:(int)arg1 ;
-(int)usernameState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)actionView;
-(void)setActionView:(UIView *)arg1 ;
-(void)setRefreshButton:(UIButton *)arg1 ;
-(UIButton *)refreshButton;
@end

