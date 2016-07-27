
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIScrollView.h>

@class IGRetroRegistrationUsernameViewController, IGRetroRegistrationUsernameField, IGRetroRegistrationNextButton, IGCoreTextView, UILabel, UIImageView;

@interface IGRetroRegistrationUsernameScrollView : UIScrollView {

	IGRetroRegistrationUsernameViewController* _vcDelegate;
	IGRetroRegistrationUsernameField* _usernameField;
	IGRetroRegistrationNextButton* _nextButton;
	IGCoreTextView* _termView;
	UILabel* _usernameLabel;
	UILabel* _usernameDescriptionLabel;
	UIImageView* _badgeView;

}

@property (nonatomic,retain) IGRetroRegistrationUsernameField * usernameField;                           //@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGRetroRegistrationNextButton * nextButton;                                 //@synthesize nextButton=_nextButton - In the implementation block
@property (nonatomic,retain) IGCoreTextView * termView;                                                  //@synthesize termView=_termView - In the implementation block
@property (nonatomic,retain) UILabel * usernameLabel;                                                    //@synthesize usernameLabel=_usernameLabel - In the implementation block
@property (nonatomic,retain) UILabel * usernameDescriptionLabel;                                         //@synthesize usernameDescriptionLabel=_usernameDescriptionLabel - In the implementation block
@property (nonatomic,retain) UIImageView * badgeView;                                                    //@synthesize badgeView=_badgeView - In the implementation block
@property (assign,nonatomic,__weak) IGRetroRegistrationUsernameViewController * vcDelegate;              //@synthesize vcDelegate=_vcDelegate - In the implementation block
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(IGCoreTextView *)termView;
-(IGRetroRegistrationUsernameViewController *)vcDelegate;
-(void)setUsernameField:(IGRetroRegistrationUsernameField *)arg1 ;
-(void)setTermView:(IGCoreTextView *)arg1 ;
-(id)createBadgeView;
-(id)createUsernameLabel;
-(id)createUsernameDescriptionLabel;
-(id)createUsernameField;
-(id)createTermView;
-(UILabel *)usernameDescriptionLabel;
-(void)setUsernameDescriptionLabel:(UILabel *)arg1 ;
-(void)setBadgeView:(UIImageView *)arg1 ;
-(IGRetroRegistrationUsernameField *)usernameField;
-(void)setVcDelegate:(IGRetroRegistrationUsernameViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)badgeView;
-(IGRetroRegistrationNextButton *)nextButton;
-(void)setNextButton:(IGRetroRegistrationNextButton *)arg1 ;
@end

