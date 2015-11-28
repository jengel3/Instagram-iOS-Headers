
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGTextField.h>

@class IGRetroRegistrationUsernameActionView;

@interface IGRetroRegistrationUsernameField : IGTextField {

	IGRetroRegistrationUsernameActionView* _actionView;

}

@property (nonatomic,retain) IGRetroRegistrationUsernameActionView * actionView;              //@synthesize actionView=_actionView - In the implementation block
-(void)configureRightView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(IGRetroRegistrationUsernameActionView *)actionView;
-(void)setActionView:(IGRetroRegistrationUsernameActionView *)arg1 ;
@end

