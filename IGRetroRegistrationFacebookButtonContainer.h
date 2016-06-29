
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGFacebookButton, IGRetroRegistrationFacebookButtonSeperator;

@interface IGRetroRegistrationFacebookButtonContainer : UIView {

	IGFacebookButton* _facebookButton;
	IGRetroRegistrationFacebookButtonSeperator* _facebookButtonSeparator;

}

@property (nonatomic,retain) IGRetroRegistrationFacebookButtonSeperator * facebookButtonSeparator;              //@synthesize facebookButtonSeparator=_facebookButtonSeparator - In the implementation block
@property (nonatomic,retain) IGFacebookButton * facebookButton;                                                 //@synthesize facebookButton=_facebookButton - In the implementation block
-(IGRetroRegistrationFacebookButtonSeperator *)facebookButtonSeparator;
-(IGFacebookButton *)facebookButton;
-(void)setFacebookButton:(IGFacebookButton *)arg1 ;
-(void)setFacebookButtonSeparator:(IGRetroRegistrationFacebookButtonSeperator *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

