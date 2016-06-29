
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface IGRetroRegistrationFacebookButtonSeperator : UIView {

	UILabel* _textLabel;
	UIView* _lineLeft;
	UIView* _lineRight;

}

@property (nonatomic,retain) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIView * lineLeft;                //@synthesize lineLeft=_lineLeft - In the implementation block
@property (nonatomic,retain) UIView * lineRight;               //@synthesize lineRight=_lineRight - In the implementation block
-(void)setLineLeft:(UIView *)arg1 ;
-(void)setLineRight:(UIView *)arg1 ;
-(UIView *)lineLeft;
-(UIView *)lineRight;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UILabel *)textLabel;
-(void)setTextLabel:(UILabel *)arg1 ;
@end

