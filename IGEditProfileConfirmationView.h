
#import <UIKit/UIView.h>

@class IGButton, UITextField, UIImageView, CAGradientLayer;

@interface IGEditProfileConfirmationView : UIView {

	IGButton* _confirmButton;
	UITextField* _textField;
	UIImageView* _exclamationMark;
	CAGradientLayer* _confirmButtonGradient;

}

@property (nonatomic,retain) UITextField * textField;                              //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UIImageView * exclamationMark;                        //@synthesize exclamationMark=_exclamationMark - In the implementation block
@property (nonatomic,retain) CAGradientLayer * confirmButtonGradient;              //@synthesize confirmButtonGradient=_confirmButtonGradient - In the implementation block
@property (nonatomic,retain) IGButton * confirmButton;                             //@synthesize confirmButton=_confirmButton - In the implementation block
+(id)confirmButtonWithAsset:(id)arg1 ;
+(id)confirmButtonGradient;
-(void)setConfirmButton:(IGButton *)arg1 ;
-(CAGradientLayer *)confirmButtonGradient;
-(UIImageView *)exclamationMark;
-(id)initWithTextField:(id)arg1 ;
-(void)setExclamationMark:(UIImageView *)arg1 ;
-(void)setConfirmButtonGradient:(CAGradientLayer *)arg1 ;
-(void)layoutSubviews;
-(UITextField *)textField;
-(void)setTextField:(UITextField *)arg1 ;
-(IGButton *)confirmButton;
@end

